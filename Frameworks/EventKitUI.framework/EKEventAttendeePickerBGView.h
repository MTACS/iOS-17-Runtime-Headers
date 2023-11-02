
@interface EKEventAttendeePickerBGView : UIView {
    id /* block */  _boundsChangeCallback;
}

@property (nonatomic, copy) id /* block */ boundsChangeCallback;

- (void).cxx_destruct;
- (id /* block */)boundsChangeCallback;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundsChangeCallback:(id /* block */)arg1;

@end
