
@interface PKPassTileMetadata : NSObject <NSSecureCoding> {
    NSString * _identifier;
    long long  _preferredStyle;
    bool  _selectable;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) PKPassTileMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (nonatomic) long long preferredStyle;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (nonatomic, readonly) long long type;

+ (id)_createDictionaryMapForDictionaries:(id)arg1;
+ (id)_createMetadataForType:(long long)arg1 identifier:(id)arg2;
+ (id)_createWithDictionary:(id)arg1 privateDictionaryMap:(id)arg2 privateDictionary:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_setupWithDictionary:(id)arg1 privateDictionary:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSelectable;
- (id)metadataTypeVehicleFunction;
- (long long)preferredStyle;
- (void)setPreferredStyle:(long long)arg1;
- (void)setSelectable:(bool)arg1;
- (long long)type;

@end
