
@interface QLExtensionThumbnailGenerator : NSObject <QLThumbnailSurfaceGeneratorProtocol> {
    QLExtensionManager * _extensionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) QLExtensionManager *extensionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)hasThirdPartyThumbnailGeneratorForContentType:(id)arg1;
+ (bool)hasThirdPartyThumbnailGeneratorForItem:(id)arg1;
+ (bool)hasThumbnailGeneratorForContentType:(id)arg1 firstPartyExtension:(bool)arg2;

- (void).cxx_destruct;
- (id)_generateImageFromRawData:(id)arg1 bitmapFormat:(id)arg2 scale:(double)arg3;
- (id)_generateImageFromURL:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)extensionManager;
- (void)generatePlatformImageThumbnailForRequest:(id)arg1 extensionThumbnailItem:(id)arg2 iconFlavor:(int)arg3 wantsLowQuality:(bool)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (void)ioSurfaceWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)setExtensionManager:(id)arg1;

@end
