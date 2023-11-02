
@interface _SFPBRFImageElement : PBCodable <NSSecureCoding, _SFPBRFImageElement> {
    NSArray * _sources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *sources;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSources:(id)arg1;
- (void)clearSources;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setSources:(id)arg1;
- (id)sources;
- (id)sourcesAtIndex:(unsigned long long)arg1;
- (unsigned long long)sourcesCount;
- (void)writeTo:(id)arg1;

@end
