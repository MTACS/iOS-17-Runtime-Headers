
@interface ICAttachmentThumbnailPostProcessingOperation : NSOperation <ICAttachmentThumbnailOperation> {
    ICAppearanceInfo * _appearanceInfo;
    ICThumbnailDataCache * _cache;
    NSString * _cacheKey;
    NSMutableArray * _completionBlocks;
    id /* block */  _fallbackBlock;
    UIImage * _image;
    unsigned long long  _imageScaling;
    bool  _isMovie;
    NSURL * _mediaURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    id /* block */  _processingBlock;
    double  _scale;
    bool  _showAsFileIcon;
}

@property (nonatomic, retain) ICAppearanceInfo *appearanceInfo;
@property (nonatomic, retain) ICThumbnailDataCache *cache;
@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (nonatomic, copy) id /* block */ fallbackBlock;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) bool isMovie;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, copy) id /* block */ processingBlock;
@property (nonatomic) double scale;
@property (nonatomic) bool showAsFileIcon;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (id)appearanceInfo;
- (id)cache;
- (id)cacheKey;
- (id)completionBlocks;
- (id /* block */)fallbackBlock;
- (id)image;
- (unsigned long long)imageScaling;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(id /* block */)arg6 completionBlocks:(id)arg7 fallbackBlock:(id /* block */)arg8;
- (bool)isMatchingOperationForCacheKey:(id)arg1 cache:(id)arg2;
- (bool)isMovie;
- (void)main;
- (id)mediaURL;
- (struct CGSize { double x1; double x2; })minSize;
- (id /* block */)processingBlock;
- (double)scale;
- (void)setAppearanceInfo:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setFallbackBlock:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setIsMovie:(bool)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProcessingBlock:(id /* block */)arg1;
- (void)setScale:(double)arg1;
- (void)setShowAsFileIcon:(bool)arg1;
- (bool)showAsFileIcon;

@end
