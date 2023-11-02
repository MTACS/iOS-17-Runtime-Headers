
@interface RTTAbbreviationTapGestureRecognizer : UITapGestureRecognizer {
    RTTUIAbbreviationView * _abbrevationView;
}

@property (nonatomic) RTTUIAbbreviationView *abbrevationView;

- (void).cxx_destruct;
- (id)abbrevationView;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (void)setAbbrevationView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
