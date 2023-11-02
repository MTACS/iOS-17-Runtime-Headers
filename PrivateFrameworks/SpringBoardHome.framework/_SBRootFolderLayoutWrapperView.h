
@interface _SBRootFolderLayoutWrapperView : SBFTouchPassThroughView {
    struct CGSize { 
        double width; 
        double height; 
    }  _extendedSize;
    double  _headerOffset;
    double  _statusBarHeightAdjustment;
    UIView * _wrappedView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } extendedSize;
@property (nonatomic) double headerOffset;
@property (nonatomic) double statusBarHeightAdjustment;
@property (nonatomic, retain) UIView *wrappedView;

- (void).cxx_destruct;
- (void)_updateLayout;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (struct CGSize { double x1; double x2; })extendedSize;
- (double)headerOffset;
- (void)layoutSubviews;
- (void)setExtendedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderOffset:(double)arg1;
- (void)setStatusBarHeightAdjustment:(double)arg1;
- (void)setWrappedView:(id)arg1;
- (double)statusBarHeightAdjustment;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)wrappedView;

@end
