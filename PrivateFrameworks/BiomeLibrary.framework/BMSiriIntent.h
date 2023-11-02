
@interface BMSiriIntent : BMEventBase <BMStoreData> {
    NSData * _eventData;
    NSString * _eventType;
    NSString * _intentID;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *eventData;
@property (nonatomic, readonly) NSString *eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *intentID;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)eventData;
- (id)eventType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIntentID:(id)arg1 eventType:(id)arg2 eventData:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)intentID;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
