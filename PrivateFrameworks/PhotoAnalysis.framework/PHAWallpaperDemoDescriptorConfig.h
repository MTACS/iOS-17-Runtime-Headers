
@interface PHAWallpaperDemoDescriptorConfig : NSObject {
    NSString * _assetUUID;
    NSString * _styleCategory;
    NSString * _titleKey;
}

@property (nonatomic, retain) NSString *assetUUID;
@property (nonatomic, retain) NSString *styleCategory;
@property (nonatomic, retain) NSString *titleKey;

- (void).cxx_destruct;
- (id)assetUUID;
- (id)initWithDictionary:(id)arg1;
- (void)setAssetUUID:(id)arg1;
- (void)setStyleCategory:(id)arg1;
- (void)setTitleKey:(id)arg1;
- (id)styleCategory;
- (id)titleKey;

@end
