
@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailService, QLThumbnailServiceSurfaceGeneratorProtocol> {
    QLThumbnailProvider * _thumbnailProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLThumbnailProvider *thumbnailProvider;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 contentType:(id)arg6 interpolationQuality:(int)arg7 wantsLowQuality:(bool)arg8 withContents:(id)arg9 additionalResourcesWrapper:(id)arg10 generatorData:(id)arg11 completionHandler:(id /* block */)arg12;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 contentType:(id)arg6 interpolationQuality:(int)arg7 wantsLowQuality:(bool)arg8 withFileURLHandler:(id)arg9 additionalResourcesWrapper:(id)arg10 generatorData:(id)arg11 completionHandler:(id /* block */)arg12;
- (void)ioSurfaceForRequest:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)protocolHost;
- (id)protocolHostWithErrorHandler:(id /* block */)arg1;
- (void)provideThumbnailForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setThumbnailProvider:(id)arg1;
- (id)thumbnailProvider;

@end
