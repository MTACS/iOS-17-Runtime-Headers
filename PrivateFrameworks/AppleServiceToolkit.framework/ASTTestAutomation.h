
@interface ASTTestAutomation : NSObject {
    bool  _testAutomationEnabled;
}

@property (nonatomic) bool testAutomationEnabled;

+ (void)postServerRequest:(id)arg1;
+ (void)postServerResponse:(id)arg1;
+ (id)sharedInstance;

- (id)init;
- (void)setTestAutomationEnabled:(bool)arg1;
- (bool)testAutomationEnabled;

@end
