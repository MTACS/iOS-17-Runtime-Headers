
@interface PKPaletteToolPickerBackgroundContentView : UIView {
    PKPaletteToolPickerEdgeView * _bottomOrTrailingEdgeView;
    bool  _bottomOrTrailingEdgeViewVisible;
    NSArray * _horizontalLayoutConstraints;
    bool  _isVerticalRight;
    long long  _layoutAxis;
    PKPaletteToolPickerEdgeView * _topOrLeadingEdgeView;
    bool  _topOrLeadingEdgeViewVisible;
    NSArray * _verticalLayoutConstraints;
}

- (void).cxx_destruct;
- (id)init;

@end
