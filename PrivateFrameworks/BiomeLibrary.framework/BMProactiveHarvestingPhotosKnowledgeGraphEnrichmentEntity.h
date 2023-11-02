
@interface BMProactiveHarvestingPhotosKnowledgeGraphEnrichmentEntity : BMEventBase <BMStoreData> {
    unsigned int  _category;
    bool  _hasCategory;
    bool  _hasScore;
    NSString * _language;
    NSString * _name;
    double  _score;
}

@property (nonatomic, readonly) unsigned int category;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCategory;
@property (nonatomic) bool hasScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)category;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasCategory;
- (bool)hasScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 score:(id)arg2 language:(id)arg3 category:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)language;
- (id)name;
- (double)score;
- (id)serialize;
- (void)setHasCategory:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
