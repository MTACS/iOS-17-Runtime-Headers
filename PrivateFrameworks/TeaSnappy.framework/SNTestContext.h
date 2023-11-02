
@interface SNTestContext : NSObject {
    UIApplication * _application;
    NSMutableDictionary * _objects;
    NSString * _testName;
}

@property (nonatomic, readonly) UIApplication *application;
@property (nonatomic, readonly) NSMutableDictionary *objects;
@property (nonatomic, readonly) NSString *testName;

- (void).cxx_destruct;
- (id)application;
- (id)initWithApplication:(id)arg1 testName:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)objects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)testName;

@end
