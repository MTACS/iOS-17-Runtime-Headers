
@interface SiriTestingContext : SiriContext {
    NSDictionary * _testingContext;
    AFRequestInfo * _testingRequestInfo;
}

@property (nonatomic, readonly) NSDictionary *testingContext;
@property (nonatomic, readonly) AFRequestInfo *testingRequestInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsAudioInput;
- (bool)containsRecognitionStrings;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioInput:(id)arg1;
- (id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPPTContext:(id)arg1;
- (id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithRecognitionStrings:(id)arg1;
- (id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2;
- (id)initWithRequestInfo:(id)arg1 recognitionStrings:(id)arg2;
- (id)initWithRequestInfo:(id)arg1 recognitionStrings:(id)arg2 siriContextOverride:(id)arg3;
- (id)testingContext;
- (id)testingRequestInfo;

@end
