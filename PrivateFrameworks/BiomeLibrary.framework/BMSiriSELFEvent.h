
@interface BMSiriSELFEvent : BMEventBase <BMStoreData> {
    NSData * _eventData;
    bool  _hasRaw_absoluteTimestamp;
    double  _raw_absoluteTimestamp;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (id)eventData;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 uniqueID:(id)arg2 eventData:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
