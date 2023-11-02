
@interface AVContentKeyResponse : NSObject {
    AVContentKeyResponseInternal * _keyResponse;
}

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (id)contentKeyResponseWithAuthorizationTokenData:(id)arg1;
+ (id)contentKeyResponseWithClearKeyData:(id)arg1 initializationVector:(id)arg2;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1;
+ (id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2;

- (void)dealloc;
- (id)initWithKeySystem:(id)arg1;
- (id)keySystem;

// Image: /System/Library/PrivateFrameworks/SeymourMedia.framework/SeymourMedia

+ (id)smu_contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg1 renewalDate:(id)arg2;

@end
