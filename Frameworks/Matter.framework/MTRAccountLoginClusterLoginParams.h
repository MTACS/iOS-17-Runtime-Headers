
@interface MTRAccountLoginClusterLoginParams : NSObject <NSCopying> {
    NSNumber * _serverSideProcessingTimeout;
    NSString * _setupPIN;
    NSString * _tempAccountIdentifier;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSString *setupPIN;
@property (nonatomic, copy) NSString *tempAccountIdentifier;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setSetupPIN:(id)arg1;
- (void)setTempAccountIdentifier:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)setupPIN;
- (id)tempAccountIdentifier;
- (id)timedInvokeTimeoutMs;

@end
