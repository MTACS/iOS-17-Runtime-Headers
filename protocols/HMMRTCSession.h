
@protocol HMMRTCSession <HMFActivityAssociating>

@required

- (NSString *)serviceName;
- (void)submitEventWithName:(NSString *)arg1 payload:(NSDictionary *)arg2;
- (NSUUID *)uuid;
- (HMMRTCSessionVoucher *)voucher;

@end
