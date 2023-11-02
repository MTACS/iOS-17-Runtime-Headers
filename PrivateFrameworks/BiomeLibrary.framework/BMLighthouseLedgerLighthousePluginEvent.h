
@interface BMLighthouseLedgerLighthousePluginEvent : BMEventBase <BMStoreData> {
    NSString * _contextID;
    bool  _hasRaw_timestamp;
    BMLighthouseLedgerLighthousePluginEventEventStatus * _performTaskStatus;
    BMLighthouseLedgerLighthousePluginEventEventStatus * _performTrialTaskStatus;
    double  _raw_timestamp;
    BMLighthouseLedgerLighthousePluginEventEventStatus * _stop;
    BMLighthouseLedgerTrialIdentifiers * _trialIdentifiers;
}

@property (nonatomic, readonly) NSString *contextID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMLighthouseLedgerLighthousePluginEventEventStatus *performTaskStatus;
@property (nonatomic, readonly) BMLighthouseLedgerLighthousePluginEventEventStatus *performTrialTaskStatus;
@property (nonatomic, readonly) BMLighthouseLedgerLighthousePluginEventEventStatus *stop;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)contextID;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTrialIdentifiers:(id)arg1 contextID:(id)arg2 timestamp:(id)arg3 performTaskStatus:(id)arg4 performTrialTaskStatus:(id)arg5 stop:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)performTaskStatus;
- (id)performTrialTaskStatus;
- (id)serialize;
- (id)stop;
- (id)timestamp;
- (id)trialIdentifiers;
- (void)writeTo:(id)arg1;

@end
