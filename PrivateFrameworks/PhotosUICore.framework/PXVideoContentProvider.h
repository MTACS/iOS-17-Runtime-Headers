
@interface PXVideoContentProvider : PXObservable {
    ISWrappedAVAudioSession * _audioSession;
    NSString * _contentIdentifier;
    double  _loadingProgress;
    PXVideoContentProviderLoadingResult * _loadingResult;
    NSNumber * _videoAspectRatio;
}

@property (nonatomic, readonly) NSDictionary *analyticsPayload;
@property (nonatomic, readonly) ISWrappedAVAudioSession *audioSession;
@property (nonatomic, readonly, copy) NSString *contentIdentifier;
@property (nonatomic) double loadingProgress;
@property (nonatomic, retain) PXVideoContentProviderLoadingResult *loadingResult;
@property (nonatomic, retain) NSNumber *videoAspectRatio;

- (void).cxx_destruct;
- (id)analyticsPayload;
- (id)audioSession;
- (void)beginLoadingWithPriority:(long long)arg1;
- (void)cancelLoading;
- (id)contentIdentifier;
- (double)loadingProgress;
- (id)loadingResult;
- (void)makeUniqueContentIdentifier;
- (id)mutableChangeObject;
- (void)setLoadingProgress:(double)arg1;
- (void)setLoadingResult:(id)arg1;
- (void)setVideoAspectRatio:(id)arg1;
- (id)videoAspectRatio;

@end
