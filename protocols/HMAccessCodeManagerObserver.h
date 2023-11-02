
@protocol HMAccessCodeManagerObserver <NSObject>

@optional

- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didAddAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didAddHomeAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didRemoveAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didRemoveHomeAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didUpdateAccessoryAccessCodes:(NSArray *)arg2;
- (void)accessCodeManager:(HMAccessCodeManager *)arg1 didUpdateHomeAccessCodes:(NSArray *)arg2;

@end
