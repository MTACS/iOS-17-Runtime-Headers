
@interface ASTTestAttributes : NSObject {
    NSNumber * _testId;
    NSString * _version;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSNumber *testId;
@property (nonatomic, retain) NSString *version;

+ (id)attributesWithTestId:(id)arg1 version:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithTestId:(id)arg1 version:(id)arg2;
- (void)setTestId:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)testId;
- (id)version;

@end
