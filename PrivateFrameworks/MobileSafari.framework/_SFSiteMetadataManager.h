
@interface _SFSiteMetadataManager : WBSSiteMetadataManager {
    _SFFaviconProvider * _faviconProvider;
    WBSLeadImageCache * _leadImageCache;
    WBSLinkPresentationIconCache * _linkPresentationIconCache;
    _SFSavedAccountTouchIconCache * _savedAccountTouchIconCache;
    WBSTabGroupTouchIconProvider * _tabGroupIconProvider;
    _SFTouchIconCache * _touchIconCache;
}

@property (nonatomic, readonly) _SFFaviconProvider *faviconProvider;
@property (nonatomic, readonly) WBSLeadImageCache *leadImageCache;
@property (nonatomic, readonly) WBSLinkPresentationIconCache *linkPresentationIconCache;
@property (nonatomic, readonly) _SFSavedAccountTouchIconCache *savedAccountTouchIconCache;
@property (nonatomic, readonly) WBSTabGroupTouchIconProvider *tabGroupIconProvider;
@property (nonatomic, readonly) _SFTouchIconCache *touchIconCache;

+ (bool)hasSharedSiteMetadataManager;
+ (void)setSharedSiteMetadataManager:(id)arg1;
+ (void)setSharedSiteMetadataManagerProvider:(id)arg1;
+ (id)sharedSiteMetadataManager;

- (void).cxx_destruct;
- (id)faviconProvider;
- (id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(bool)arg3 metadataType:(unsigned long long)arg4;
- (id)leadImageCache;
- (id)linkPresentationIconCache;
- (id)savedAccountTouchIconCache;
- (void)scheduleLowPriorityRequestForBookmarks:(id)arg1;
- (id)tabGroupIconProvider;
- (id)touchIconCache;

@end
