
@interface CPLTestFeedbackMessage : CPLFeedbackMessage {
    NSString * _testMessage;
}

@property (nonatomic, readonly) NSString *testMessage;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithTestMessage:(id)arg1 libraryIdentifier:(id)arg2;
- (id)serverMessage;
- (id)testMessage;

@end
