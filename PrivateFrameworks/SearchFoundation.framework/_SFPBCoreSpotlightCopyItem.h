
@interface _SFPBCoreSpotlightCopyItem : PBCodable <NSSecureCoding, _SFPBCoreSpotlightCopyItem> {
    NSString * _applicationBundleIdentifier;
    NSString * _coreSpotlightIdentifier;
    NSArray * _dataProviderTypeIdentifiers;
    NSArray * _fileProviderTypeIdentifiers;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (nonatomic, copy) NSArray *dataProviderTypeIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *fileProviderTypeIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDataProviderTypeIdentifiers:(id)arg1;
- (void)addFileProviderTypeIdentifiers:(id)arg1;
- (id)applicationBundleIdentifier;
- (void)clearDataProviderTypeIdentifiers;
- (void)clearFileProviderTypeIdentifiers;
- (id)coreSpotlightIdentifier;
- (id)dataProviderTypeIdentifiers;
- (id)dataProviderTypeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataProviderTypeIdentifiersCount;
- (id)dictionaryRepresentation;
- (id)fileProviderTypeIdentifiers;
- (id)fileProviderTypeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)fileProviderTypeIdentifiersCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setDataProviderTypeIdentifiers:(id)arg1;
- (void)setFileProviderTypeIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
