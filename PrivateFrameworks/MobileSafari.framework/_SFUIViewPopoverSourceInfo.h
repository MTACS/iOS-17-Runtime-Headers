
@interface _SFUIViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    unsigned long long  _permittedArrowDirections;
    long long  _provenance;
    bool  _shouldHideArrow;
    bool  _shouldPassthroughSuperview;
    UIView * _view;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } popoverSourceRect;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic) long long provenance;
@property (nonatomic, readonly) bool shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) bool shouldHideArrow;
@property (nonatomic) bool shouldPassthroughSuperview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)initWithView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)permittedArrowDirections;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (id)popoverSourceView;
- (long long)provenance;
- (void)setPermittedArrowDirections:(unsigned long long)arg1;
- (void)setProvenance:(long long)arg1;
- (void)setShouldHideArrow:(bool)arg1;
- (void)setShouldPassthroughSuperview:(bool)arg1;
- (bool)shouldHideArrow;
- (bool)shouldPassthroughSuperview;

@end
