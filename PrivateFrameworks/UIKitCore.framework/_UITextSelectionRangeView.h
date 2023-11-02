
@interface _UITextSelectionRangeView : UIView {
    UIColor * _selectionBorderColor;
    double  _selectionBorderWidth;
    UIColor * _selectionColor;
}

@property (nonatomic) struct CGPath { }*path;
@property (nonatomic, readonly) CAShapeLayer *pathLayer;
@property (nonatomic, retain) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic, retain) UIColor *selectionColor;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGPath { }*)path;
- (id)pathLayer;
- (id)selectionBorderColor;
- (double)selectionBorderWidth;
- (id)selectionColor;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setSelectionBorderColor:(id)arg1;
- (void)setSelectionBorderWidth:(double)arg1;
- (void)setSelectionColor:(id)arg1;

@end
