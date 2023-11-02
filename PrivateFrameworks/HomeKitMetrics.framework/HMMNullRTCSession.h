
@interface HMMNullRTCSession : HMFObject <HMMRTCSession> {
    NSString * _serviceName;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) HMMRTCSessionVoucher *voucher;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 serviceName:(id)arg2;
- (id)objectForChildActivity;
- (id)serviceName;
- (void)submitEventWithName:(id)arg1 payload:(id)arg2;
- (id)uuid;
- (id)voucher;

@end
