
@interface ASVRoundedButton : ASVButton

- (void)_setupViewWithCornerRadius:(double)arg1;
- (id)initWithImage:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 adjustsFontForContentSizeCategory:(bool)arg5;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 cornerRadius:(double)arg5;
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 cornerRadius:(double)arg5 adjustsFontForContentSizeCategory:(bool)arg6;

@end
