
@interface SFUIActivityImageProvider : SFUIImageProvider

- (id)_fetchActionImageForActivity:(id)arg1 contentSizeCategory:(id)arg2 imageSymbolConfiguration:(id)arg3;
- (void)_fetchBundleImageForBundleIdentifier:(id)arg1 activityCategory:(long long)arg2 contentSizeCategory:(id)arg3 iconFormat:(int)arg4;
- (void)_fetchImageForActivity:(id)arg1 contentSizeCategory:(id)arg2 imageSymbolConfiguration:(id)arg3;
- (void)_handleIconImage:(id)arg1 bundleIdentifier:(id)arg2 activityCategory:(long long)arg3 contentSizeCategory:(id)arg4 placeholder:(bool)arg5;
- (void)performImageRequest:(id)arg1;
- (int)requestImageForActivity:(id)arg1 contentSizeCategory:(id)arg2 imageSymbolConfiguration:(id)arg3 resultHandler:(id /* block */)arg4;
- (int)requestImageForActivity:(id)arg1 contentSizeCategory:(id)arg2 imageSymbolConfiguration:(id)arg3 synchronous:(bool)arg4 resultHandler:(id /* block */)arg5;
- (int)requestImageForBundleIdentifier:(id)arg1 activityCategory:(long long)arg2 contentSizeCategory:(id)arg3 iconFormat:(int)arg4 synchronous:(bool)arg5 resultHandler:(id /* block */)arg6;
- (int)requestImageForBundleIdentifier:(id)arg1 activityCategory:(long long)arg2 contentSizeCategory:(id)arg3 synchronous:(bool)arg4 resultHandler:(id /* block */)arg5;

@end
