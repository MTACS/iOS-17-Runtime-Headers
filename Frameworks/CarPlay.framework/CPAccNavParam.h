
@interface CPAccNavParam : NSObject {
    Class  _collectionGeneric;
    bool  _encodeable;
    NSArray * _keys;
    Class  _objcType;
    NSString * _property;
}

@property (nonatomic, retain) Class collectionGeneric;
@property (nonatomic) bool encodeable;
@property (nonatomic, retain) NSArray *keys;
@property (nonatomic, retain) Class objcType;
@property (nonatomic, readonly) CPAccNavParamKey *primaryKey;
@property (nonatomic, retain) NSString *property;

+ (long long)_accNavTypeForUpdate:(Class)arg1 parameter:(id)arg2 key:(id)arg3;
+ (id)_encodedTypeForClass:(Class)arg1 property:(id)arg2;
+ (Class)_objcTypeForUpdate:(Class)arg1 parameter:(id)arg2;
+ (id)paramWithProperty:(id)arg1 keys:(id)arg2;

- (void).cxx_destruct;
- (Class)collectionGeneric;
- (void)configureTypesForUpdate:(Class)arg1;
- (id)copySettingCollectionGeneric:(Class)arg1;
- (id)copySettingEncodeable:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)encodeable;
- (id)init;
- (id)keys;
- (Class)objcType;
- (id)primaryKey;
- (id)property;
- (void)setCollectionGeneric:(Class)arg1;
- (void)setEncodeable:(bool)arg1;
- (void)setKeys:(id)arg1;
- (void)setObjcType:(Class)arg1;
- (void)setProperty:(id)arg1;

@end
