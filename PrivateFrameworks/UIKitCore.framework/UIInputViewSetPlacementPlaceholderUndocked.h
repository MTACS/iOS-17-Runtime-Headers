
@interface UIInputViewSetPlacementPlaceholderUndocked : UIInputViewSetPlacementUndocked {
    double  _height;
}

+ (id)placementWithHeight:(double)arg1 undockedOffset:(struct CGPoint { double x1; double x2; })arg2 chromeBuffer:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;

- (double)heightOfInputViews:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
