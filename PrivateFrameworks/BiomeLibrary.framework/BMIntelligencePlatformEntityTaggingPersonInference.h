
@interface BMIntelligencePlatformEntityTaggingPersonInference : BMEventBase <BMStoreData> {
    unsigned long long  _entityIdentifier;
    int  _entityTagID;
    NSString * _feedbackEventID;
    bool  _hasEntityIdentifier;
    bool  _hasScore;
    double  _score;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long entityIdentifier;
@property (nonatomic, readonly) int entityTagID;
@property (nonatomic, readonly) NSString *feedbackEventID;
@property (nonatomic) bool hasEntityIdentifier;
@property (nonatomic) bool hasScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned long long)entityIdentifier;
- (int)entityTagID;
- (id)feedbackEventID;
- (bool)hasEntityIdentifier;
- (bool)hasScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithEntityIdentifier:(id)arg1 entityTagID:(int)arg2 score:(id)arg3 feedbackEventID:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)score;
- (id)serialize;
- (void)setHasEntityIdentifier:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
