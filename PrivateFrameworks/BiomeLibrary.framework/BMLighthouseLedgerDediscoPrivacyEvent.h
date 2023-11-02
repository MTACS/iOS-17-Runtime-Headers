
@interface BMLighthouseLedgerDediscoPrivacyEvent : BMEventBase <BMStoreData> {
    NSString * _contextID;
    BMLighthouseLedgerDediscoPrivacyEventEventState * _event;
    NSString * _eventIdentifier;
    bool  _hasRaw_timestamp;
    double  _raw_timestamp;
    BMLighthouseLedgerTrialIdentifiers * _trialIdentifiers;
}

@property (nonatomic, readonly) NSString *contextID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMLighthouseLedgerDediscoPrivacyEventEventState *event;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (readonly) unsigned long long hash;
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
- (id)event;
- (id)eventIdentifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTrialIdentifiers:(id)arg1 contextID:(id)arg2 timestamp:(id)arg3 eventIdentifier:(id)arg4 event:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)timestamp;
- (id)trialIdentifiers;
- (void)writeTo:(id)arg1;

@end
