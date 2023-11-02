
@interface PUReviewAssetLivePhotoMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest> {
    int  __liveRequestID;
}

@property (nonatomic, readonly) int _liveRequestID;

- (int)_liveRequestID;
- (void)cancelRequest;
- (id)initLivePhotoRequestID:(int)arg1;

@end
