
@interface _UIShortDefinitionView : UIView {
    UITextView * _definitionTextView;
    _UIDefinitionValue * _definitionValue;
}

@property (nonatomic, retain) _UIDefinitionValue *definitionValue;

- (void).cxx_destruct;
- (id)definitionValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDefinitionValue:(id)arg1;

@end
