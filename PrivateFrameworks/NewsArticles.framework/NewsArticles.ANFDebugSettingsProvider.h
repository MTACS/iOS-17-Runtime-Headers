
@interface NewsArticles.ANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider> {
    void observers;
    void testingConditionEnabled;
    void viewportDebuggingEnabled;
}

@property (nonatomic) bool testingConditionEnabled;
@property (nonatomic) bool viewportDebuggingEnabled;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setTestingConditionEnabled:(bool)arg1;
- (void)setViewportDebuggingEnabled:(bool)arg1;
- (bool)testingConditionEnabled;
- (bool)viewportDebuggingEnabled;

@end
