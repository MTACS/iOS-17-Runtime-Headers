
@protocol NUANFDebugSettingsObserver <NSObject>

@required

- (void)testingConditionEnabled:(bool)arg1;
- (void)viewportDebuggingEnabled:(bool)arg1;

@end