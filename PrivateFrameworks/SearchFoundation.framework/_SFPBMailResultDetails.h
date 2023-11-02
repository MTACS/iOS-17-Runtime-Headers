
@interface _SFPBMailResultDetails : PBCodable <NSSecureCoding, _SFPBMailResultDetails> {
    int  _dataSources;
    int  _skgMegadomeSpotlightIndexEntries;
    float  _suggestionScore;
}

@property (nonatomic) int dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int skgMegadomeSpotlightIndexEntries;
@property (nonatomic) float suggestionScore;
@property (readonly) Class superclass;

- (int)dataSources;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDataSources:(int)arg1;
- (void)setSkgMegadomeSpotlightIndexEntries:(int)arg1;
- (void)setSuggestionScore:(float)arg1;
- (int)skgMegadomeSpotlightIndexEntries;
- (float)suggestionScore;
- (void)writeTo:(id)arg1;

@end
