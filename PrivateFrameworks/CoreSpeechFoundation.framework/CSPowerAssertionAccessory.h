
@interface CSPowerAssertionAccessory : NSObject {
    unsigned int  _assertionID;
    NSString * _name;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 timeout:(double)arg2;
- (void)invalidate;

@end
