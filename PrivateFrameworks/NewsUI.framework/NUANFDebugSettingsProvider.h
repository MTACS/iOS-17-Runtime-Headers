
@interface NUANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider> {
    bool  _testingConditionEnabled;
    bool  _viewportDebuggingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool testingConditionEnabled;
@property (nonatomic, readonly) bool viewportDebuggingEnabled;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (bool)testingConditionEnabled;
- (bool)viewportDebuggingEnabled;

@end
