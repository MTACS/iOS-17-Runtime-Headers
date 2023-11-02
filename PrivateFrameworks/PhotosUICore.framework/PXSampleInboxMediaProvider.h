
@interface PXSampleInboxMediaProvider : NSObject <PXInboxModelMediaProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_mockImage;

- (void)cancelImageRequest:(int)arg1;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 resultHandler:(id /* block */)arg3;

@end
