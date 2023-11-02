
@interface HMFPowerAssertion : HMFAssertion {
    unsigned int  _identifier;
}

@property (nonatomic) unsigned int identifier;

- (void)_cleanUpPowerAssertion;
- (unsigned int)identifier;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 timeout:(double)arg2;
- (void)invalidate;
- (void)setIdentifier:(unsigned int)arg1;

@end
