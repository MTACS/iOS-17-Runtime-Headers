
@interface _SFPBCATModel : PBCodable <NSSecureCoding, _SFPBCATModel> {
    NSString * _bundleIdentifier;
    NSString * _catIdentifier;
    NSData * _params;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *catIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *params;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)catIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)params;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCatIdentifier:(id)arg1;
- (void)setParams:(id)arg1;
- (void)writeTo:(id)arg1;

@end
