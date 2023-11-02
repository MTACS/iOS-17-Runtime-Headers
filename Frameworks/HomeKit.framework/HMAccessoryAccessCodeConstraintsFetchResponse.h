
@interface HMAccessoryAccessCodeConstraintsFetchResponse : NSObject {
    HMAccessory * _accessory;
    HMAccessCodeConstraints * _constraints;
    NSError * _error;
}

@property (readonly) HMAccessory *accessory;
@property (readonly, copy) HMAccessCodeConstraints *constraints;
@property (retain) NSError *error;

+ (id)responseWithValue:(id)arg1 home:(id)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (id)constraints;
- (id)error;
- (id)initWithAccessory:(id)arg1 constraints:(id)arg2 error:(id)arg3;
- (void)setError:(id)arg1;

@end
