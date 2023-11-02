
@protocol MFPlayerItem

@required

- (AVPlayerItem *)avPlayerItem;
- (NSString *)contentItemID;
- (NSString *)description;
- (bool)hasLoadableAsset;
- (bool)isAssetLoaded;
- (bool)isFullyDownloaded;
- (bool)isVideoContent;
- (bool)prefersSeekOverSkip;
- (void)setContentItemID:(NSString *)arg1;
- (void)setIsVideoContent:(bool)arg1;
- (void)setTitle:(NSString *)arg1;
- (double)time;
- (NSString *)title;
- (NSURL *)url;

@end
