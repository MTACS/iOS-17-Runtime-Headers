
@interface BMTextUnderstandingPoem : BMEventBase <BMStoreData> {
    double  _confidence;
    NSString * _conversationId;
    bool  _hasConfidence;
    BMTextUnderstandingPoemEntity * _object;
    int  _predicate;
    BMTextUnderstandingPoemEntity * _subject;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *conversationId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfidence;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMTextUnderstandingPoemEntity *object;
@property (nonatomic, readonly) int predicate;
@property (nonatomic, readonly) BMTextUnderstandingPoemEntity *subject;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (double)confidence;
- (id)conversationId;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasConfidence;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSubject:(id)arg1 predicate:(int)arg2 object:(id)arg3 conversationId:(id)arg4 confidence:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)object;
- (int)predicate;
- (id)serialize;
- (void)setHasConfidence:(bool)arg1;
- (id)subject;
- (void)writeTo:(id)arg1;

@end
