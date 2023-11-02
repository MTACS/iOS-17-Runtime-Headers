
@interface TranslationUI.VisualTranslationResult : NSObject <TranslationUI.LTUIVisualTranslationResultProtocol> {
    void bottomLeft;
    void bottomRight;
    void isPassthrough;
    void string;
    void topLeft;
    void topRight;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } bottomRight;
@property (nonatomic, readonly) bool isPassthrough;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } topRight;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })bottomLeft;
- (struct CGPoint { double x1; double x2; })bottomRight;
- (id)init;
- (bool)isPassthrough;
- (id)string;
- (struct CGPoint { double x1; double x2; })topLeft;
- (struct CGPoint { double x1; double x2; })topRight;
- (id)uuid;

@end
