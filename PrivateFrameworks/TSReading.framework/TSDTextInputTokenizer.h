
@interface TSDTextInputTokenizer : UITextInputStringTokenizer {
    TSDTextInputResponder * _textInputResponder;
}

@property (nonatomic, readonly) <TSDTextInput> *editor;

- (id)editor;
- (id)initWithTextInput:(id)arg1;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)p_moveToEndOfWordFromPosition:(id)arg1;
- (id)p_moveToStartOfWordFromPosition:(id)arg1;
- (id)p_positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;

@end
