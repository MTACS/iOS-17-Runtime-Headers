
@interface AKCarrierBundlePhoneCertificate : NSObject {
    NSString * _phoneCertificate;
    long long  _slotID;
}

@property (nonatomic, retain) NSString *phoneCertificate;
@property (nonatomic) long long slotID;

- (void).cxx_destruct;
- (id)phoneCertificate;
- (void)setPhoneCertificate:(id)arg1;
- (void)setSlotID:(long long)arg1;
- (long long)slotID;

@end
