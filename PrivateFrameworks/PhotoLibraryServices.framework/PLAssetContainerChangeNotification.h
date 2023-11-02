
@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {
    bool  _keyAssetDidChange;
    bool  _titleDidChange;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSObject<PLAlbumProtocol> *album;
@property (nonatomic, readonly) <PLAssetContainer> *assetContainer;
@property (nonatomic, readonly) PLManagedObject *container;
@property (nonatomic, readonly) bool keyAssetDidChange;
@property (nonatomic, readonly) bool titleDidChange;

+ (id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3;

- (void).cxx_destruct;
- (void)_calculateDiffs;
- (id)_contentRelationshipName;
- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)album;
- (id)assetContainer;
- (id)container;
- (void)dealloc;
- (id)description;
- (bool)hasDeletes;
- (bool)keyAssetDidChange;
- (id)name;
- (bool)titleDidChange;
- (id)userInfo;

@end
