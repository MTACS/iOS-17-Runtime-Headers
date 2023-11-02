
@interface HMFMemoryAssertion : HMFAssertion {
    NSObject<OS_os_transaction> * _internal;
}

@property (nonatomic, retain) NSObject<OS_os_transaction> *internal;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)internal;
- (void)invalidate;
- (void)mark;
- (void)setInternal:(id)arg1;

@end
