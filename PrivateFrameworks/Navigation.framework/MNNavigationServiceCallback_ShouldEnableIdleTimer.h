
@interface MNNavigationServiceCallback_ShouldEnableIdleTimer : MNNavigationServiceCallbackParameters {
    bool  _shouldEnable;
}

@property (nonatomic) bool shouldEnable;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldEnable:(bool)arg1;
- (bool)shouldEnable;
- (unsigned long long)type;

@end
