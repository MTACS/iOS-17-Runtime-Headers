
@interface HMAccessoryAccessCodeFetchResponse : NSObject {
    HMAccessory * _accessory;
    NSArray * _accessoryAccessCodes;
    NSError * _error;
}

@property (readonly) HMAccessory *accessory;
@property (readonly, copy) NSArray *accessoryAccessCodes;
@property (retain) NSError *error;

+ (id)responseWithValue:(id)arg1 accessory:(id)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryAccessCodes;
- (id)error;
- (id)initWithAccessory:(id)arg1 accessoryAccessCodes:(id)arg2 error:(id)arg3;
- (void)setError:(id)arg1;

@end
