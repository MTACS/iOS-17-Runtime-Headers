
@interface ACHDatabaseAssertion : NSObject {
    HDAssertion * _assertion;
}

@property (nonatomic, retain) HDAssertion *assertion;

+ (id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 error:(id*)arg3;
+ (id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 timeout:(double)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)assertion;
- (void)dealloc;
- (id)initWithHDAssertion:(id)arg1;
- (void)invalidate;
- (void)setAssertion:(id)arg1;

@end
