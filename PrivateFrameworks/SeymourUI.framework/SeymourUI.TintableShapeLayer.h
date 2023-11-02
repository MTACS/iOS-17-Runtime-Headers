
@interface SeymourUI.TintableShapeLayer : CAShapeLayer {
    void tintAdjustmentMode;
    void undimmedBorderColor;
    void undimmedStrokeColor;
}

@property (nonatomic, retain) struct CGColor { }*borderColor;
@property (nonatomic, retain) struct CGColor { }*strokeColor;

- (void).cxx_destruct;
- (struct CGColor { }*)borderColor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)strokeColor;

@end
