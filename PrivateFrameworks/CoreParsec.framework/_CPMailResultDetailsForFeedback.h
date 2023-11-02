
@interface _CPMailResultDetailsForFeedback : PBCodable <NSSecureCoding, _CPMailResultDetailsForFeedback> {
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
- (unsigned long long)hash;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDataSources:(int)arg1;
- (void)setSkgMegadomeSpotlightIndexEntries:(int)arg1;
- (void)setSuggestionScore:(float)arg1;
- (int)skgMegadomeSpotlightIndexEntries;
- (float)suggestionScore;
- (void)writeTo:(id)arg1;

@end
