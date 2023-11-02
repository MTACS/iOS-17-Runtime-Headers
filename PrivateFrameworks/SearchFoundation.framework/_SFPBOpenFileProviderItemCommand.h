
@interface _SFPBOpenFileProviderItemCommand : PBCodable <NSSecureCoding, _SFPBOpenFileProviderItemCommand> {
    NSString * _coreSpotlightIdentifier;
    NSString * _fileProviderIdentifier;
    bool  _shouldRevealFile;
}

@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fileProviderIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool shouldRevealFile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (id)fileProviderIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setFileProviderIdentifier:(id)arg1;
- (void)setShouldRevealFile:(bool)arg1;
- (bool)shouldRevealFile;
- (void)writeTo:(id)arg1;

@end
