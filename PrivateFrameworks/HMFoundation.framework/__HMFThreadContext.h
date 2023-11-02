
@interface __HMFThreadContext : HMFObject {
    unsigned long long  _count;
    bool  _shouldRestoreVoucher;
    NSThread * _thread;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) bool shouldRestoreVoucher;
@property (readonly) NSThread *thread;
@property (nonatomic, retain) NSObject<OS_voucher> *voucher;

+ (id)currentContext;

- (void).cxx_destruct;
- (id)__init;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setShouldRestoreVoucher:(bool)arg1;
- (void)setVoucher:(id)arg1;
- (bool)shouldRestoreVoucher;
- (id)thread;
- (id)voucher;

@end
