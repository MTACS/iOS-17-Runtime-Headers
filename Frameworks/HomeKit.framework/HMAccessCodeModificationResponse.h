
@interface HMAccessCodeModificationResponse : NSObject {
    HMAccessCodeValue * _accessCodeValue;
    HMAccessory * _accessory;
    HMAccessoryAccessCode * _accessoryAccessCode;
    NSError * _error;
    long long  _operationType;
}

@property (copy) HMAccessCodeValue *accessCodeValue;
@property (readonly) HMAccessory *accessory;
@property (retain) HMAccessoryAccessCode *accessoryAccessCode;
@property (retain) NSError *error;
@property (readonly) long long operationType;

+ (id)responseWithValue:(id)arg1 accessory:(id)arg2;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)accessory;
- (id)accessoryAccessCode;
- (id)error;
- (id)initWithAccessory:(id)arg1 accessoryAccessCode:(id)arg2 accessCodeValue:(id)arg3 operationType:(long long)arg4 error:(id)arg5;
- (long long)operationType;
- (void)setAccessCodeValue:(id)arg1;
- (void)setAccessoryAccessCode:(id)arg1;
- (void)setError:(id)arg1;

@end
