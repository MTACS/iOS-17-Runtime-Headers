
@protocol ACTUserActionStreaming <NSObject>

@required

+ (<ACTUserActionStreaming> *)userActionStreamWithParameters:(NSDictionary *)arg1 delegate:(id <ACTUserActionStreamDelegate>)arg2;

- (<ACTUserActionStreamDelegate> *)delegate;
- (TIErrorGenerator *)errorGenerator;
- (bool)inPartialCandidateSelection;
- (NSString *)intendedText;
- (bool)isFinished;
- (<ACTUserAction> *)nextUserAction;
- (unsigned int)randomNumberSeed;
- (void)resetForIntendedSegments:(NSArray *)arg1 expectedSegments:(NSArray *)arg2;
- (void)setDelegate:(id <ACTUserActionStreamDelegate>)arg1;
- (void)setErrorGenerator:(TIErrorGenerator *)arg1;
- (void)setIntendedText:(NSString *)arg1;
- (void)setRandomNumberSeed:(unsigned int)arg1;
- (void)setUserModel:(TIKeyboardTyperUserModel *)arg1;
- (TIKeyboardTyperUserModel *)userModel;

@end
