
@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) PLManagedAsset *asset;

+ (id)notificationWithAsset:(id)arg1 snapshot:(id)arg2;

- (void).cxx_destruct;
- (id)_contentRelationshipName;
- (id)asset;
- (id)description;
- (id)name;
- (id)userInfo;

@end
