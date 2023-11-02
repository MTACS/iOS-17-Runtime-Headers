
@interface ZoomServicesKeyboardManager : NSObject {
    bool  _inUnitTestMode;
}

@property (nonatomic) bool inUnitTestMode;

+ (id)sharedInstance;

- (bool)inUnitTestMode;
- (long long)keyboardCommandForEvent:(id)arg1;
- (void)setInUnitTestMode:(bool)arg1;

@end
