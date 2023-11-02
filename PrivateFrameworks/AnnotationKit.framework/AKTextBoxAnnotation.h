
@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation {
    UIColor * _highlightColor;
}

+ (id)defaultPlaceholderText;
+ (bool)deleteAfterEditingIfEmpty;

- (void).cxx_destruct;
- (id)displayName;
- (id)highlightColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitTestBounds;
- (id)init;
- (id)keysForValuesToObserveForRedrawing;
- (void)setHighlightColor:(id)arg1;

@end
