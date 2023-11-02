
@protocol HDSPEnvironmentAware <NSObject>

@required

+ (id)new;

- (HDSPEnvironment *)environment;
- (id)init;
- (id)initWithEnvironment:(HDSPEnvironment *)arg1;

@optional

- (void)environmentDidBecomeReady:(HDSPEnvironment *)arg1;
- (void)environmentWillBecomeReady:(HDSPEnvironment *)arg1;
- (void)environmentWillInvalidate:(HDSPEnvironment *)arg1;

@end
