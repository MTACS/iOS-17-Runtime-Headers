
@interface CDMDataDispatcherContext : NSObject {
    NSString * _callingBundleId;
    int  _cdmSELFLoggingPolicyType;
    unsigned long long  _samplingDiceRoll;
    NSUUID * _streamUUID;
}

@property (nonatomic, readonly) NSString *callingBundleId;
@property (nonatomic) int cdmSELFLoggingPolicyType;
@property (nonatomic) unsigned long long samplingDiceRoll;
@property (nonatomic, readonly) NSUUID *streamUUID;

- (void).cxx_destruct;
- (id)callingBundleId;
- (int)cdmSELFLoggingPolicyType;
- (id)init;
- (id)initWithCallingBundleId:(id)arg1;
- (bool)isSampledForEmission;
- (unsigned long long)samplingDiceRoll;
- (void)setCdmSELFLoggingPolicyType:(int)arg1;
- (void)setSamplingDiceRoll:(unsigned long long)arg1;
- (id)streamUUID;

@end
