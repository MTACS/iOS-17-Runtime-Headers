
@interface BMLighthouseLedgerTrialIdentifiers : BMEventBase <BMStoreData> {
    BMLighthouseLedgerTrialIdentifiersBMLTIdentifiers * _bmltIdentifiers;
    BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers * _experimentIdentifiers;
}

@property (nonatomic, readonly) BMLighthouseLedgerTrialIdentifiersBMLTIdentifiers *bmltIdentifiers;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers *experimentIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bmltIdentifiers;
- (unsigned int)dataVersion;
- (id)description;
- (id)experimentIdentifiers;
- (id)initByReadFrom:(id)arg1;
- (id)initWithExperimentIdentifiers:(id)arg1 bmltIdentifiers:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
