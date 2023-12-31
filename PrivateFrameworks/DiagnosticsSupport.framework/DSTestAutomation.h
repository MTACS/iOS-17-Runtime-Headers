
@interface DSTestAutomation : NSObject {
    bool  _testAutomationEnabled;
}

@property (nonatomic) bool testAutomationEnabled;

+ (void)postConfiguration:(id)arg1;
+ (void)postInteractiveTestEvent:(id)arg1 info:(id)arg2;
+ (id)sharedInstance;

- (id)init;
- (void)setTestAutomationEnabled:(bool)arg1;
- (bool)testAutomationEnabled;

@end
