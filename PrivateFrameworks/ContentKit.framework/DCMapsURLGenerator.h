
@interface DCMapsURLGenerator : DCURLGenerator {
    DCMapsLink * _mapsLink;
    NSMutableDictionary * _queryDictionary;
}

@property (nonatomic, readonly) DCMapsLink *mapsLink;
@property (nonatomic, readonly) NSMutableDictionary *queryDictionary;

+ (id)URLWithMapsLink:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)directionsMode;
- (id)host;
- (id)initWithMapsLink:(id)arg1;
- (id)mapType;
- (id)mapsLink;
- (id)path;
- (void)populateQueryDictionary;
- (id)query;
- (id)queryDictionary;
- (id)scheme;
- (void)setString:(id)arg1 forQueryKey:(id)arg2;

@end
