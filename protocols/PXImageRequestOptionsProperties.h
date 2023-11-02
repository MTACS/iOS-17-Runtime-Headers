
@protocol PXImageRequestOptionsProperties

@required

- (bool)allowPlaceholder;
- (bool)allowSecondaryDegradedImage;
- (long long)deliveryMode;
- (long long)downloadIntent;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (long long)loadingMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (bool)preferHDR;
- (id /* block */)progressHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, double, NSError *, bool*, NSDictionary *, void*, id, SEL
- (long long)resizeMode;
- (NSObject<OS_dispatch_queue> *)resultHandlerQueue;
- (void)setAllowPlaceholder:(bool)arg1;
- (void)setAllowSecondaryDegradedImage:(bool)arg1;
- (void)setDeliveryMode:(long long)arg1;
- (void)setDownloadIntent:(long long)arg1;
- (void)setLoadingMode:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreferHDR:(bool)arg1;
- (void)setProgressHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, bool*, NSDictionary *, void*
- (void)setResizeMode:(long long)arg1;
- (void)setResultHandlerQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setUseLowMemoryMode:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (bool)useLowMemoryMode;
- (long long)version;

@end
