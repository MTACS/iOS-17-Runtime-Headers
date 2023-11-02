
@interface UITextSelectionRectView : UIView {
    UIColor * _selectionBorderColor;
    double  _selectionBorderWidth;
    UIColor * _selectionColor;
    double  _selectionCornerRadius;
}

@property (nonatomic, readonly) bool hasPath;
@property (nonatomic, readonly) CAShapeLayer *pathLayer;
@property (nonatomic, retain) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic, retain) UIColor *selectionColor;
@property (nonatomic) double selectionCornerRadius;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)hasPath;
- (id)path;
- (id)pathLayer;
- (id)selectionBorderColor;
- (double)selectionBorderWidth;
- (id)selectionColor;
- (double)selectionCornerRadius;
- (void)setPath:(id)arg1;
- (void)setSelectionBorderColor:(id)arg1;
- (void)setSelectionBorderWidth:(double)arg1;
- (void)setSelectionColor:(id)arg1;
- (void)setSelectionCornerRadius:(double)arg1;

@end
