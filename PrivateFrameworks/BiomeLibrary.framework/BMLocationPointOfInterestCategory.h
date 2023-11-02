
@interface BMLocationPointOfInterestCategory : BMEventBase <BMStoreData> {
    bool  _hasRank;
    bool  _hasRaw_timestamp;
    NSString * _poiCategory;
    unsigned int  _rank;
    double  _raw_timestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRank;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *poiCategory;
@property (nonatomic, readonly) unsigned int rank;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasRank;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPoiCategory:(id)arg1 rank:(id)arg2 timestamp:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)poiCategory;
- (unsigned int)rank;
- (id)serialize;
- (void)setHasRank:(bool)arg1;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
