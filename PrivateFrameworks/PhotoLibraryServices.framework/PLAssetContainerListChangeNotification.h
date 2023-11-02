
@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSObject<PLAlbumContainer> *albumList;
@property (nonatomic, readonly) <PLAssetContainerList> *assetContainerList;

+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;

- (void).cxx_destruct;
- (id)_contentRelationshipName;
- (id)albumList;
- (id)assetContainerList;
- (id)description;
- (id)name;
- (id)userInfo;

@end
