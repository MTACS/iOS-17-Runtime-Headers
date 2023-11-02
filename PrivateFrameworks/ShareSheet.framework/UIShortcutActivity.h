
@interface UIShortcutActivity : UIApplicationExtensionActivity {
    UIImage * _iconImage;
    NSString * _identifier;
    NSString * _name;
    NSArray * _photosAssetIdentifiers;
    NSString * _singleUseToken;
    NSNumber * _sortValue;
}

@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *photosAssetIdentifiers;
@property (nonatomic, retain) NSString *singleUseToken;
@property (nonatomic, retain) NSNumber *sortValue;

- (void).cxx_destruct;
- (id)_actionImage;
- (long long)_defaultSortGroup;
- (bool)_isServiceExtension;
- (id)activityTitle;
- (id)activityType;
- (id)iconImage;
- (id)identifier;
- (id)initWithApplicationExtension:(id)arg1 partialShortcutWithName:(id)arg2 identifier:(id)arg3 image:(id)arg4 sortValue:(id)arg5;
- (id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3;
- (id)initWithPartial:(id)arg1;
- (id)name;
- (id)photosAssetIdentifiers;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhotosAssetIdentifiers:(id)arg1;
- (void)setSingleUseToken:(id)arg1;
- (void)setSortValue:(id)arg1;
- (id)singleUseToken;
- (id)sortValue;

@end
