
@protocol NUANFDebugSettingsProvider <NSObject>

@required

- (void)addObserver:(id <NUANFDebugSettingsObserver>)arg1;
- (void)removeObserver:(id <NUANFDebugSettingsObserver>)arg1;
- (bool)testingConditionEnabled;
- (bool)viewportDebuggingEnabled;

@end
