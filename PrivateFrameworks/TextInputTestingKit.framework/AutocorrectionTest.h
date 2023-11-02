
@interface AutocorrectionTest : NSObject <NSCoding> {
    NSNumber * _corpusId;
    NSArray * _expectedOutput;
    NSString * _input;
    NSDictionary * _sourceMetadata;
    NSArray * _touches;
}

@property (nonatomic, readonly) NSNumber *corpusId;
@property (nonatomic, readonly) NSArray *expectedOutput;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) NSDictionary *sourceMetadata;
@property (nonatomic, readonly) NSArray *touches;

+ (id)testWithInput:(id)arg1;
+ (id)testWithInput:(id)arg1 andCorpusId:(id)arg2;
+ (id)testWithInput:(id)arg1 expectedOutput:(id)arg2;
+ (id)testWithInput:(id)arg1 expectedOutput:(id)arg2 sourceMetadata:(id)arg3 withTouches:(id)arg4 andCorpusId:(id)arg5;
+ (id)testWithTouches:(id)arg1 expectedOutput:(id)arg2;

- (void).cxx_destruct;
- (id)corpusId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedOutput;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)sourceMetadata;
- (id)touches;

@end
