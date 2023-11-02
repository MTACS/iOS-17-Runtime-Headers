
@interface PARResponse : NSObject {
    NSArray * _alternativeResults;
    NSArray * _corrections;
    GEOUserSessionEntity * _geoUserSessionEntity;
    NSData * _legacyJSON;
    NSString * _prefix;
    NSString * _query;
    NSArray * _rawResponse;
    NSDictionary * _rawSqf;
    PARReply * _reply;
    NSArray * _results;
    NSArray * _sections;
    NSDictionary * _serverFeatures;
    NSArray * _suggestions;
    bool  _suggestionsAreBlended;
}

@property (nonatomic, readonly) NSArray *alternativeResults;
@property (nonatomic, retain) NSArray *corrections;
@property (nonatomic, retain) GEOUserSessionEntity *geoUserSessionEntity;
@property (nonatomic, retain) NSData *legacyJSON;
@property (nonatomic, retain) NSString *prefix;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, readonly) NSArray *rawResponse;
@property (nonatomic, retain) NSDictionary *rawSqf;
@property (nonatomic, readonly) PARReply *reply;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSDictionary *serverFeatures;
@property (nonatomic, retain) NSArray *suggestions;
@property (nonatomic) bool suggestionsAreBlended;

+ (id)responseFromData:(id)arg1 session:(id)arg2 request:(id)arg3;
+ (id)responseFromJSON:(id)arg1 session:(id)arg2;
+ (id)responseFromReply:(id)arg1;

- (void).cxx_destruct;
- (id)alternativeResults;
- (id)corrections;
- (id)geoUserSessionEntity;
- (id)initWithReply:(id)arg1;
- (id)initWithReply:(id)arg1 factory:(id)arg2 dataZKW:(id)arg3;
- (id)legacyJSON;
- (id)prefix;
- (id)query;
- (id)rawResponse;
- (id)rawSqf;
- (id)reply;
- (id)results;
- (id)sections;
- (id)serverFeatures;
- (void)setCorrections:(id)arg1;
- (void)setGeoUserSessionEntity:(id)arg1;
- (void)setLegacyJSON:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRawSqf:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setSuggestionsAreBlended:(bool)arg1;
- (id)suggestions;
- (bool)suggestionsAreBlended;

@end
