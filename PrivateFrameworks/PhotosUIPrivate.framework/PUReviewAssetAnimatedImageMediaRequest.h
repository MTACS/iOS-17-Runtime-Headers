
@interface PUReviewAssetAnimatedImageMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest> {
    long long  __animatedRequestID;
}

@property (nonatomic, readonly) long long _animatedRequestID;

- (long long)_animatedRequestID;
- (void)cancelRequest;
- (id)initWithAnimatedImageRequestID:(long long)arg1;

@end
