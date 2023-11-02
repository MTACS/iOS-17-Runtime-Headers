
@protocol CDPDOctagonTrustProxy <NSObject>

@required

+ (bool)octagonIsSOSFeatureEnabled;

- (bool)cacheRecoveryKey:(NSString *)arg1 forAltDSID:(NSString *)arg2 error:(id*)arg3;
- (CDPContext *)cdpContext;
- (bool)disableRecoveryKey:(id*)arg1;
- (NSArray *)fetchAllEscrowRecords:(NSDictionary *)arg1 forceFetch:(bool)arg2 error:(id*)arg3;
- (NSArray *)fetchAllEscrowRecords:(NSDictionary *)arg1 source:(long long)arg2 error:(id*)arg3;
- (NSArray *)fetchEscrowRecords:(NSDictionary *)arg1 forceFetch:(bool)arg2 error:(id*)arg3;
- (NSArray *)fetchEscrowRecords:(NSDictionary *)arg1 source:(long long)arg2 error:(id*)arg3;
- (id)initWithContext:(CDPContext *)arg1;
- (bool)isRecoveryKeySet:(OTConfigurationContext *)arg1 error:(id*)arg2;
- (bool)registerRecoveryKey:(NSString *)arg1 error:(id*)arg2;
- (void)setCdpContext:(CDPContext *)arg1;
- (NSArray *)tlkRecoverabilityForEscrow:(NSDictionary *)arg1 record:(OTEscrowRecord *)arg2 error:(id*)arg3;
- (NSArray *)tlkRecoverabilityForEscrow:(NSDictionary *)arg1 record:(OTEscrowRecord *)arg2 source:(long long)arg3 error:(id*)arg4;

@end
