
@interface BMOSAnalyticsReliability : BMEventBase <BMStoreData> {
    NSString * _reason;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *reason;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithReason:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)reason;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
