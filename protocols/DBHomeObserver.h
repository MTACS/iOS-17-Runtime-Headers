
@protocol DBHomeObserver <NSObject>

@required

- (void)home:(DBHome *)arg1 didUpdateLastUsedServiceOfType:(NSString *)arg2;
- (void)homeDidChangeInRange:(DBHome *)arg1;
- (void)homeDidEnterExtendedRange:(DBHome *)arg1;
- (void)homeDidExitExtendedRange:(DBHome *)arg1;

@end
