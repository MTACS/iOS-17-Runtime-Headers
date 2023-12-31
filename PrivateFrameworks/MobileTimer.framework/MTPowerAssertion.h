
@interface MTPowerAssertion : NSObject {
    unsigned int  _assertionID;
    double  _assertionTimeout;
    NSString * _name;
}

@property (nonatomic) unsigned int assertionID;
@property (nonatomic, readonly) double assertionTimeout;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (unsigned int)assertionID;
- (double)assertionTimeout;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 assertionTimeout:(double)arg2;
- (id)name;
- (void)releaseAssertion;
- (void)setAssertionID:(unsigned int)arg1;
- (void)takeAssertion;

@end
