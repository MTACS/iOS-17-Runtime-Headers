
@protocol TranslationUI.LTUIVisualTranslationResultProtocol

@required

- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (bool)isPassthrough;
- (NSString *)string;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (NSUUID *)uuid;

@end
