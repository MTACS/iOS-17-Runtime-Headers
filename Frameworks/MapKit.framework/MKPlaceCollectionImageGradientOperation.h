
@interface MKPlaceCollectionImageGradientOperation : NSOperation {
    UIImage * _blurredImage;
    NSCache * _blurringCache;
    NSString * _cacheId;
    NSString * _contentSizeCategory;
    NSString * _debugName;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSize;
    NSCache * _downloadCache;
    bool  _isRTL;
    double  _screenScale;
    UIImage * _sourceImage;
    NSURL * _url;
}

@property (nonatomic, readonly) UIImage *blurredImage;
@property (nonatomic) NSCache *blurringCache;
@property (nonatomic, retain) NSString *cacheId;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (nonatomic, retain) NSString *debugName;
@property (nonatomic) struct CGSize { double x1; double x2; } desiredSize;
@property (nonatomic) NSCache *downloadCache;
@property (nonatomic) bool isRTL;
@property (nonatomic) double screenScale;
@property (nonatomic, retain) UIImage *sourceImage;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)blurredImage;
- (id)blurringCache;
- (id)cacheId;
- (id)contentSizeCategory;
- (id)debugName;
- (struct CGSize { double x1; double x2; })desiredSize;
- (id)downloadCache;
- (id)initWithUrl:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentSizeCategory:(id)arg3 name:(id)arg4 downloadCache:(id)arg5 gradientCache:(id)arg6 isRTL:(bool)arg7 screenScale:(double)arg8 cacheId:(id)arg9;
- (bool)isRTL;
- (void)main;
- (double)screenScale;
- (void)setBlurringCache:(id)arg1;
- (void)setCacheId:(id)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDebugName:(id)arg1;
- (void)setDesiredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDownloadCache:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setScreenScale:(double)arg1;
- (void)setSourceImage:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sourceImage;
- (id)url;

@end
