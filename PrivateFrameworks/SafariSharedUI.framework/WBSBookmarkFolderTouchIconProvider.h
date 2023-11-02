
@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider> {
    NSMutableDictionary * _folderUUIDsToTouchIconInfo;
    NSObject<OS_dispatch_queue> * _internalQueue;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    NSMutableDictionary * _requestsToRequestInfos;
}

@property (nonatomic, readonly) NSArray *allFolderUUIDs;
@property (readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) WBSBookmarkFolderTouchIconConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (readonly) Class superclass;

+ (bool)_appUsesLeftToRightLayout;

- (void).cxx_destruct;
- (id)_arrayByPaddingArray:(id)arg1 toMaximumNumberOfThumbnailsWithObject:(id)arg2;
- (void)_coalesceResponseDispatchForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2;
- (id)_drawTouchIconForRequest:(id)arg1;
- (void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id /* block */)_responseHandlerForRequest:(id)arg1 thumbnailIndex:(unsigned long long)arg2;
- (id)allFolderUUIDs;
- (id)backgroundColor;
- (id)bookmarkUUIDForRequest:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (id)configuration;
- (id)defaultFolderIconForRequest:(id)arg1;
- (void)didCreateTouchIcon:(id)arg1;
- (id)displayableFolderContentsForRequest:(id)arg1;
- (id)init;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (void)removeInfoForFolderWithUUID:(id)arg1;
- (void)removeInfoForFoldersWithUUIDs:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)setProviderDelegate:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2;

@end
