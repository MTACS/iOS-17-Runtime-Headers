
@interface MKPowerAssertion : NSObject {
    void * _powerAssertion;
}

@property (nonatomic) void*powerAssertion;

- (void)dealloc;
- (id)init;
- (void*)powerAssertion;
- (void)setPowerAssertion:(void*)arg1;

@end
