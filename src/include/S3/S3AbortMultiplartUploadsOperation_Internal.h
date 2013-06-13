/*
 * Copyright 2010-2013 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>

#import "AmazonS3Client.h"
#import "AmazonServiceRequest.h"

@interface S3AbortMultiplartUploadsOperation_Internal : NSOperation <AmazonServiceRequestDelegate>
{
    BOOL _isExecuting;
    BOOL _isFinished;
    id<AmazonServiceRequestDelegate> _delegate;
    AmazonS3Client *_s3;
    NSString *_bucket;
    NSDate *_date;
    NSString *_key;
}

@property (nonatomic, assign) id<AmazonServiceRequestDelegate> delegate;
@property (nonatomic, retain) AmazonS3Client *s3;
@property (nonatomic, retain) NSString *bucket;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *key;


@end
