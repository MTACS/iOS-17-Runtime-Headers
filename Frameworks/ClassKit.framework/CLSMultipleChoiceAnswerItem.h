
@interface CLSMultipleChoiceAnswerItem : CLSObject <CLSMutableAssetAdopter, CLSRelationable> {
    long long  _displayOrder;
    NSString * _itemText;
    NSArray * assets;
}

@property (nonatomic, readonly) NSArray *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *itemText;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (void)addAsset:(id)arg1;
- (id)assets;
- (bool)assetsEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)displayOrder;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemText;
- (void)mergeWithObject:(id)arg1;
- (void)removeAsset:(id)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setItemText:(id)arg1;

@end
