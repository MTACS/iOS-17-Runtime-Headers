
@interface DMCPowerAssertion : DMCProcessAssertion {
    bool  _parked;
}

@property (getter=isParked, nonatomic, readonly) bool parked;

- (void)dealloc;
- (id)initWithReason:(id)arg1;
- (bool)isParked;
- (void)park;
- (void)unpark;

@end
