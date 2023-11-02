
@interface IMPowerAssertion : NSObject {
    unsigned int  _assertion;
    NSString * _identifier;
    NSDictionary * _properties;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;
- (id)initWithIdentifier:(id)arg1 timeoutSec:(double)arg2 properties:(id)arg3;

@end
