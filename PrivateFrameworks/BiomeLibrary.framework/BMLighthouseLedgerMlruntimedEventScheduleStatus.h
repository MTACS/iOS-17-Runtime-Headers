
@interface BMLighthouseLedgerMlruntimedEventScheduleStatus : BMEventBase <BMStoreData> {
    bool  _hasScheduled;
    bool  _scheduled;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasScheduled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool scheduled;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasScheduled;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithScheduled:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (bool)scheduled;
- (id)serialize;
- (void)setHasScheduled:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
