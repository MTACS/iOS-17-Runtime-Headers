
@interface BLTTransaction : NSObject {
    NSObject<OS_os_transaction> * _osTransaction;
}

@property (nonatomic, retain) NSObject<OS_os_transaction> *osTransaction;

+ (id)transactionWithDescription:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDescription:(id)arg1;
- (id)osTransaction;
- (void)setOsTransaction:(id)arg1;

@end
