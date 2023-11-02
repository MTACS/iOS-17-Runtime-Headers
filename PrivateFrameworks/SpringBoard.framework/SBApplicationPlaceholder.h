
@interface SBApplicationPlaceholder : SBHProxiedApplicationPlaceholder <FBSApplicationPlaceholderObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_reloadThumbnailImage;
- (bool)cancel;
- (bool)pause;
- (bool)prioritize;
- (bool)resume;

@end
