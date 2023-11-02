
@interface VKTextInputStringTokenizer : UITextInputStringTokenizer {
    VKCTextRecognitionResult * _recognitionResult;
}

@property (nonatomic, retain) VKCTextRecognitionResult *recognitionResult;

- (void).cxx_destruct;
- (id)initWithTextInput:(id)arg1 recognitionResult:(id)arg2;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)recognitionResult;
- (void)setRecognitionResult:(id)arg1;

@end
