
@interface _SFPBSearchInAppCommand : PBCodable <NSSecureCoding, _SFPBSearchInAppCommand> {
    NSString * _applicationBundleIdentifier;
    NSString * _searchString;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *searchString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
