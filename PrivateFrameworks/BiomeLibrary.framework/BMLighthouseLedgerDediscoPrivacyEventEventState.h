
@interface BMLighthouseLedgerDediscoPrivacyEventEventState : BMEventBase <BMStoreData> {
    NSString * _errorMessage;
    bool  _hasSucceeded;
    int  _phase;
    bool  _succeeded;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic) bool hasSucceeded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int phase;
@property (nonatomic, readonly) bool succeeded;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)errorMessage;
- (bool)hasSucceeded;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPhase:(int)arg1 succeeded:(id)arg2 errorMessage:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)phase;
- (id)serialize;
- (void)setHasSucceeded:(bool)arg1;
- (bool)succeeded;
- (void)writeTo:(id)arg1;

@end
