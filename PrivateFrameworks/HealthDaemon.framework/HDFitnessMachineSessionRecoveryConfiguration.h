
@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding> {
    unsigned long long  _activityType;
    NSString * _machineBrand;
    NSString * _machineName;
    NSDate * _machinePreferredUntilDate;
    NSDate * _machineStartDate;
    unsigned long long  _machineType;
    NSUUID * _machineUUID;
    NSData * _nfcSessionIDData;
    NSUUID * _sessionUUID;
}

@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, copy) NSString *machineBrand;
@property (nonatomic, readonly, copy) NSString *machineName;
@property (nonatomic, readonly) NSDate *machinePreferredUntilDate;
@property (nonatomic, readonly) NSDate *machineStartDate;
@property (nonatomic, readonly) unsigned long long machineType;
@property (nonatomic, readonly) NSUUID *machineUUID;
@property (nonatomic, readonly) NSData *nfcSessionIDData;
@property (nonatomic, readonly) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activityType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5 activityType:(unsigned long long)arg6 machineStartDate:(id)arg7 machinePreferredUntilDate:(id)arg8 nfcSessionIDData:(id)arg9;
- (id)machineBrand;
- (id)machineName;
- (id)machinePreferredUntilDate;
- (id)machineStartDate;
- (unsigned long long)machineType;
- (id)machineUUID;
- (id)nfcSessionIDData;
- (id)sessionUUID;
- (void)setMachineBrand:(id)arg1;

@end
