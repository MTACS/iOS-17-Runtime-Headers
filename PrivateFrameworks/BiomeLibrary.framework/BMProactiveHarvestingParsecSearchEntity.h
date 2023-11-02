
@interface BMProactiveHarvestingParsecSearchEntity : BMEventBase <BMStoreData> {
    unsigned int  _category;
    bool  _hasCategory;
    bool  _hasProbabilityScore;
    NSString * _name;
    double  _probabilityScore;
    NSArray * _topics;
}

@property (nonatomic, readonly) unsigned int category;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasProbabilityScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double probabilityScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *topics;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_topicsJSONArray;
- (unsigned int)category;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasCategory;
- (bool)hasProbabilityScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 category:(id)arg2 probabilityScore:(id)arg3 topics:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (double)probabilityScore;
- (id)serialize;
- (void)setHasCategory:(bool)arg1;
- (void)setHasProbabilityScore:(bool)arg1;
- (id)topics;
- (void)writeTo:(id)arg1;

@end
