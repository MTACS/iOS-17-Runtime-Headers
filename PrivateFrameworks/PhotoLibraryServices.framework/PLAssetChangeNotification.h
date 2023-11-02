
@interface PLAssetChangeNotification : PLChangeNotification {
    NSSet * _updatedAssets;
}

@property (nonatomic, copy) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithChangedObjects:(id)arg1;
- (id)description;
- (id)name;
- (id)object;
- (void)setUpdatedAssets:(id)arg1;
- (id)updatedAssets;
- (id)userInfo;

@end
