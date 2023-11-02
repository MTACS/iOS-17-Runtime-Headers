
@interface TSDSystemTextInputResponder : TSDTextInputResponder <UITextAutoscrolling>

- (void)cancelAutoscroll;
- (void)copy:(id)arg1;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;

@end
