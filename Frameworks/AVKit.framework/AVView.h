
@interface AVView : UIView {
    bool  _hasBackdropView;
    bool  _ignoresTouches;
}

@property (nonatomic) bool hasBackdropView;
@property (nonatomic) bool ignoresTouches;

- (bool)hasBackdropView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)ignoresTouches;
- (void)setHasBackdropView:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIgnoresTouches:(bool)arg1;

@end
