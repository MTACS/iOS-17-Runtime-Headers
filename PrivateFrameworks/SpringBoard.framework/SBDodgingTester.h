
@interface SBDodgingTester : NSObject {
    PTSingleTestRecipe * _testRecipe;
}

@property (nonatomic, retain) PTSingleTestRecipe *testRecipe;

- (void).cxx_destruct;
- (id)initWithDodgingResolverController:(id)arg1;
- (void)setTestRecipe:(id)arg1;
- (id)testRecipe;

@end
