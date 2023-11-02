
@interface _UIFindNavigatorInlinePlacement : _UIFindNavigatorPlacement {
    UIView * _hostView;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
}

@property (nonatomic, retain) UIView *hostView;
@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)hostView;
- (id)inlinePlacement;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHostView:(id)arg1;
- (void)setIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
