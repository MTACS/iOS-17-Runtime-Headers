
@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy> {
    CDPContext * _cdpContext;
}

@property (nonatomic, retain) CDPContext *cdpContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)octagonIsSOSFeatureEnabled;

- (void).cxx_destruct;
- (bool)cacheRecoveryKey:(id)arg1 forAltDSID:(id)arg2 error:(id*)arg3;
- (id)cdpContext;
- (bool)disableRecoveryKey:(id*)arg1;
- (id)fetchAllEscrowRecords:(id)arg1 forceFetch:(bool)arg2 error:(id*)arg3;
- (id)fetchAllEscrowRecords:(id)arg1 source:(long long)arg2 error:(id*)arg3;
- (id)fetchEscrowRecords:(id)arg1 forceFetch:(bool)arg2 error:(id*)arg3;
- (id)fetchEscrowRecords:(id)arg1 source:(long long)arg2 error:(id*)arg3;
- (id)initWithContext:(id)arg1;
- (bool)isRecoveryKeySet:(id)arg1 error:(id*)arg2;
- (bool)registerRecoveryKey:(id)arg1 error:(id*)arg2;
- (void)setCdpContext:(id)arg1;
- (id)tlkRecoverabilityForEscrow:(id)arg1 record:(id)arg2 error:(id*)arg3;
- (id)tlkRecoverabilityForEscrow:(id)arg1 record:(id)arg2 source:(long long)arg3 error:(id*)arg4;

@end
