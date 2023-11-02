
@interface QLExtensionManager : NSObject {
    QLExtensionManagerCache * _previewExtensionCache;
    QLExtensionManagerCache * _previewHighMemoryExtensionCache;
    QLExtensionManagerCache * _thumbnailExtensionCache;
    QLExtensionManagerCache * _thumbnailHighMemoryExtensionCache;
    QLExtensionManagerCache * _thumbnailSecureExtensionCache;
}

@property (nonatomic, retain) QLExtensionManagerCache *previewExtensionCache;
@property (nonatomic, retain) QLExtensionManagerCache *previewHighMemoryExtensionCache;
@property (nonatomic, retain) QLExtensionManagerCache *thumbnailExtensionCache;
@property (nonatomic, retain) QLExtensionManagerCache *thumbnailHighMemoryExtensionCache;
@property (nonatomic, retain) QLExtensionManagerCache *thumbnailSecureExtensionCache;

// Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport

+ (void)_resetSharedManager;
+ (void)_setSharedManager:(id)arg1;
+ (bool)extension:(id)arg1 supportsExactType:(id)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)_applicationPathForBundleId:(id)arg1;
- (id)_cachesForExtensionType:(unsigned long long)arg1 shouldUseRestrictedExtension:(bool)arg2;
- (id)_extensionPointNameForExtensionType:(unsigned long long)arg1;
- (void)_setupCache;
- (bool)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (bool)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 applicationBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (bool)existsExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 firstPartyExtension:(bool)arg3 applicationBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7;
- (void)extensionContextForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 appBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 withCompletionHandler:(id /* block */)arg7;
- (void)extensionContextForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 firstPartyExtension:(bool)arg3 appBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7 withCompletionHandler:(id /* block */)arg8;
- (id)extensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6;
- (id)extensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 shouldUseRestrictedExtension:(bool)arg7;
- (id)extensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 firstPartyExtension:(bool)arg3 applicationBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7 shouldUseRestrictedExtension:(bool)arg8;
- (id)previewExtensionCache;
- (id)previewHighMemoryExtensionCache;
- (id)qlExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 applicationBundleIdentifier:(id)arg3 extensionPath:(id)arg4 extensionType:(unsigned long long)arg5 generationType:(unsigned long long)arg6 shouldUseRestrictedExtension:(bool)arg7;
- (id)qlExtensionForContentType:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 firstPartyExtension:(bool)arg3 applicationBundleIdentifier:(id)arg4 extensionPath:(id)arg5 extensionType:(unsigned long long)arg6 generationType:(unsigned long long)arg7 shouldUseRestrictedExtension:(bool)arg8;
- (void)setPreviewExtensionCache:(id)arg1;
- (void)setPreviewHighMemoryExtensionCache:(id)arg1;
- (void)setThumbnailExtensionCache:(id)arg1;
- (void)setThumbnailHighMemoryExtensionCache:(id)arg1;
- (void)setThumbnailSecureExtensionCache:(id)arg1;
- (id)thumbnailExtensionCache;
- (id)thumbnailHighMemoryExtensionCache;
- (id)thumbnailSecureExtensionCache;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (void)remoteViewControllerForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generatonType:(unsigned long long)arg4 withCompletionHandler:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/QuickLookUICore.framework/QuickLookUICore

+ (id)extensionForItem:(id)arg1;
+ (id)ql_applicationBundleIdentifierOfExtensionForItem:(id)arg1;
+ (bool)ql_isPreviewExtensionThatHaveCustomPresentationViewForItem:(id)arg1;
+ (id)ql_previewExtensionCustomLoadingTimeForItem:(id)arg1;

@end
