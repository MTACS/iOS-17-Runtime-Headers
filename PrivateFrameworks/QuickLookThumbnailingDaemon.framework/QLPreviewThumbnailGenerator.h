
@interface QLPreviewThumbnailGenerator : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentRect;
    NSString * _extensionBadge;
    int  _flavor;
    NSObject<OS_dispatch_queue> * _generationQueue;
    QLThumbnailItem * _item;
    QLThumbnailGenerationRequest * _request;
    bool  _resultHasIconModeApplied;
    bool  _resultIsLowQuality;
    unsigned long long  _sandboxExtension;
    int  _status;
    QLPlatformImage * _thumbnailImage;
    bool  _wantsLowQuality;
    QLThumbnailMetadata * generatedProperties;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (copy) NSString *extensionBadge;
@property int flavor;
@property (retain) QLThumbnailMetadata *generatedProperties;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *generationQueue;
@property (retain) QLThumbnailItem *item;
@property (retain) QLThumbnailGenerationRequest *request;
@property bool resultHasIconModeApplied;
@property bool resultIsLowQuality;
@property unsigned long long sandboxExtension;
@property int status;
@property (retain) QLPlatformImage *thumbnailImage;
@property bool wantsLowQuality;

+ (bool)canGenerateThumbnailForURL:(id)arg1;
+ (double)cornerRadiusForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)generateIconDataFromThumbnailData:(id)arg1 inputFormat:(id)arg2 outputFormat:(id*)arg3 outputContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 desiredSize:(struct CGSize { double x1; double x2; })arg5 desiredScale:(double)arg6 desiredFlavor:(int)arg7 extensionBadge:(id)arg8 wantsLowQuality:(bool)arg9 iconVariant:(long long)arg10;

- (void).cxx_destruct;
- (struct CGContext { }*)_beginContext;
- (struct CGContext { }*)_beginContextWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGContext { }*)_beginContextWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGImage { }*)_createThumbnailForIWorkFile;
- (struct CGImage { }*)_createThumbnailForImage;
- (struct CGImage { }*)_createThumbnailForImageSource:(struct CGImageSource { }*)arg1;
- (struct CGImage { }*)_createThumbnailForLivePhoto;
- (struct CGImage { }*)_createThumbnailForMovie;
- (void)_createThumbnailForPDF:(id /* block */)arg1;
- (struct CGImage { }*)_createThumbnailForPDFInProcess;
- (struct CGImage { }*)_createThumbnailForText;
- (struct CGImage { }*)_drawRTFThumbnailFromAttributedString:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)_drawRemotePDFPage:(id)arg1 atIndex:(long long)arg2 completionHandler:(id /* block */)arg3;
- (struct CGImage { }*)_drawTextThumbnailFromAttributedString:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (void)_generateThumbnailFromThirdPartyExtensionAndReplyWith:(id /* block */)arg1;
- (void)_generateThumbnailWithWillStartBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (double)_minimumDimensionForPDFPageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 requestThumbnailSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (struct CGSize { double x1; double x2; })_pixelSize;
- (void)_replyWithImage:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (id)extensionBadge;
- (int)flavor;
- (void)generateWithCompletionBlock:(id /* block */)arg1;
- (void)generateWithWillStartBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)generatedProperties;
- (id)generationQueue;
- (id)initWithGenerationRequest:(id)arg1 lowQuality:(bool)arg2 thumbnailItem:(id)arg3;
- (id)item;
- (id)request;
- (bool)resultHasIconModeApplied;
- (bool)resultIsLowQuality;
- (unsigned long long)sandboxExtension;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExtensionBadge:(id)arg1;
- (void)setFlavor:(int)arg1;
- (void)setGeneratedProperties:(id)arg1;
- (void)setGenerationQueue:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResultHasIconModeApplied:(bool)arg1;
- (void)setResultIsLowQuality:(bool)arg1;
- (void)setSandboxExtension:(unsigned long long)arg1;
- (void)setStatus:(int)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setWantsLowQuality:(bool)arg1;
- (int)status;
- (id)thumbnailImage;
- (bool)wantsLowQuality;

@end
