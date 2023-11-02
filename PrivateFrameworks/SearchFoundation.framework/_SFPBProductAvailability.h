
@interface _SFPBProductAvailability : PBCodable <NSSecureCoding, _SFPBProductAvailability> {
    NSArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
