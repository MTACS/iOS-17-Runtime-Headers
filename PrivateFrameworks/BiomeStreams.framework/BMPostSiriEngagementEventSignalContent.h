
@interface BMPostSiriEngagementEventSignalContent : BMEventBase <BMStoreData> {
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *key;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *value;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)serialize;
- (id)value;
- (void)writeTo:(id)arg1;

@end
