
@interface BMTextUnderstandingPoemEntity : BMEventBase <BMStoreData> {
    BMTextUnderstandingPoemEntityPerson * _person;
    BMTextUnderstandingPoemEntityTopic * _topic;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMTextUnderstandingPoemEntityPerson *person;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMTextUnderstandingPoemEntityTopic *topic;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPerson:(id)arg1 topic:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)person;
- (id)serialize;
- (id)topic;
- (void)writeTo:(id)arg1;

@end
