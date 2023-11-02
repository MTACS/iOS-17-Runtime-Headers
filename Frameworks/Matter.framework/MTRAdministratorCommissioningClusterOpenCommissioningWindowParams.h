
@interface MTRAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject <NSCopying> {
    NSNumber * _commissioningTimeout;
    NSNumber * _discriminator;
    NSNumber * _iterations;
    NSData * _pakePasscodeVerifier;
    NSData * _salt;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *commissioningTimeout;
@property (nonatomic, copy) NSNumber *discriminator;
@property (nonatomic, copy) NSNumber *iterations;
@property (nonatomic, copy) NSData *pakePasscodeVerifier;
@property (nonatomic, copy) NSData *pakeVerifier;
@property (nonatomic, copy) NSData *salt;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)commissioningTimeout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discriminator;
- (id)init;
- (id)iterations;
- (id)pakePasscodeVerifier;
- (id)pakeVerifier;
- (id)salt;
- (id)serverSideProcessingTimeout;
- (void)setCommissioningTimeout:(id)arg1;
- (void)setDiscriminator:(id)arg1;
- (void)setIterations:(id)arg1;
- (void)setPakePasscodeVerifier:(id)arg1;
- (void)setPakeVerifier:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
