
@interface BMTextUnderstandingPoemEntityTopic : BMEventBase <BMStoreData> {
    NSString * _mdIdentifier;
    NSString * _qid;
    NSString * _topic;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mdIdentifier;
@property (nonatomic, readonly) NSString *qid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *topic;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTopic:(id)arg1 qid:(id)arg2 mdIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)mdIdentifier;
- (id)qid;
- (id)serialize;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
