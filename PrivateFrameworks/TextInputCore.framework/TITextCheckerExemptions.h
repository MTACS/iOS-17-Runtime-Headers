
@interface TITextCheckerExemptions : NSObject {
    bool  _assertsObservers;
}

@property (nonatomic) bool assertsObservers;

- (bool)assertsObservers;
- (void)dealloc;
- (void)setAssertsObservers:(bool)arg1;
- (bool)stringIsExemptFromChecker:(id)arg1;

@end
