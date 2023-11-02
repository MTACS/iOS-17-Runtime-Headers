
@interface _SFPBOpenMediaCommand : PBCodable <NSSecureCoding, _SFPBOpenMediaCommand> {
    NSString * _clientSelectedBundleIdentifier;
    _SFPBMediaMetadata * _mediaMetadata;
}

@property (nonatomic, copy) NSString *clientSelectedBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBMediaMetadata *mediaMetadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientSelectedBundleIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaMetadata;
- (bool)readFrom:(id)arg1;
- (void)setClientSelectedBundleIdentifier:(id)arg1;
- (void)setMediaMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
