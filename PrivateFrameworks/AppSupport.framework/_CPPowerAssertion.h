
@interface _CPPowerAssertion : NSObject {
    unsigned int  _assertion;
    NSString * _identifier;
    NSArray * _stack;
    double  _timeout;
}

@property (nonatomic) double timeout;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;
- (void)setTimeout:(double)arg1;
- (void)timedout;
- (double)timeout;

@end
