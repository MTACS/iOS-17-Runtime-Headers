
@interface ACTRecordedActionStream : NSObject <ACTUserActionStreaming> {
    ACTUserMentalCursor * _cursor;
    <ACTUserActionStreaming> * _dataSynthesizer;
    <ACTUserActionStreamDelegate> * _delegate;
    TIErrorGenerator * _errorGenerator;
    double  _lastTimestamp;
    unsigned int  _randomNumberSeed;
    TTKTestCase * _testCase;
    unsigned long long  _touchEventCursor;
    NSArray * _touchEventsForInputSegments;
    TIKeyboardTyperUserModel * _userModel;
}

@property (nonatomic, retain) ACTUserMentalCursor *cursor;
@property (retain) <ACTUserActionStreaming> *dataSynthesizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACTUserActionStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TIErrorGenerator *errorGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intendedText;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) unsigned int randomNumberSeed;
@property (readonly) Class superclass;
@property (nonatomic, retain) TTKTestCase *testCase;
@property (nonatomic) unsigned long long touchEventCursor;
@property (nonatomic, retain) NSArray *touchEventsForInputSegments;
@property (nonatomic, retain) TIKeyboardTyperUserModel *userModel;

+ (id)userActionStreamWithParameters:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)configureWithParameters:(id)arg1;
- (id)cursor;
- (id)dataSynthesizer;
- (id)delegate;
- (id)errorGenerator;
- (bool)inPartialCandidateSelection;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)intendedText;
- (bool)isFinished;
- (double)lastTimestamp;
- (id)nextUserAction;
- (unsigned int)randomNumberSeed;
- (void)resetForIntendedSegments:(id)arg1 expectedSegments:(id)arg2;
- (void)setCursor:(id)arg1;
- (void)setDataSynthesizer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorGenerator:(id)arg1;
- (void)setIntendedText:(id)arg1;
- (void)setLastTimestamp:(double)arg1;
- (void)setRandomNumberSeed:(unsigned int)arg1;
- (void)setTestCase:(id)arg1;
- (void)setTouchEventCursor:(unsigned long long)arg1;
- (void)setTouchEventsForInputSegments:(id)arg1;
- (void)setUserModel:(id)arg1;
- (void)stepCursor;
- (id)testCase;
- (unsigned long long)touchEventCursor;
- (id)touchEventsForInputSegments;
- (id)userModel;

@end
