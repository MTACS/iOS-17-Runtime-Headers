
@interface _SFPBQuickLookThumbnailImage : PBCodable <NSSecureCoding, _SFPBQuickLookThumbnailImage> {
    NSString * _coreSpotlightIdentifier;
    _SFPBURL * _filePath;
    NSString * _fileProviderIdentifier;
}

@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBURL *filePath;
@property (nonatomic, copy) NSString *fileProviderIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (id)filePath;
- (id)fileProviderIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setFileProviderIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
