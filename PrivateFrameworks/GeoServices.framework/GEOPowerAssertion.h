
@interface GEOPowerAssertion : NSObject {
    unsigned int  _assertion;
    NSString * _identifier;
    double  _timeout;
    long long  _type;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 timeout:(double)arg3;

@end
