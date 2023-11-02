
@interface PXPhotosFileProviderRegisterConfiguration : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  autoLoopAsGIFContentType;
    void clientEncodingPolicy;
    void downscalingTargetDimension;
    void isLiveWallpaperSelection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  livePhotoContentType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  liveWallpaperContentType;
    void shouldIncludeCaption;
    void shouldIncludeLocation;
    void usage;
    void userEncodingPolicy;
}

@property (nonatomic) long long clientEncodingPolicy;
@property (nonatomic, retain) NSNumber *downscalingTargetDimension;
@property (nonatomic) bool isLiveWallpaperSelection;
@property (nonatomic) bool shouldIncludeCaption;
@property (nonatomic) bool shouldIncludeLocation;
@property (nonatomic, readonly) long long usage;
@property (nonatomic) long long userEncodingPolicy;

+ (id)typeIdentifierAutoLoopAsGIFPrivate;
+ (id)typeIdentifierLivePhotoBundlePrivate;
+ (id)typeIdentifierLiveWallpaperPrivate;

- (void).cxx_destruct;
- (long long)clientEncodingPolicy;
- (id)downscalingTargetDimension;
- (id)init;
- (id)initWithUsage:(long long)arg1;
- (bool)isLiveWallpaperSelection;
- (void)setClientEncodingPolicy:(long long)arg1;
- (void)setDownscalingTargetDimension:(id)arg1;
- (void)setIsLiveWallpaperSelection:(bool)arg1;
- (void)setShouldIncludeCaption:(bool)arg1;
- (void)setShouldIncludeLocation:(bool)arg1;
- (void)setUserEncodingPolicy:(long long)arg1;
- (bool)shouldIncludeCaption;
- (bool)shouldIncludeLocation;
- (long long)usage;
- (long long)userEncodingPolicy;

@end
