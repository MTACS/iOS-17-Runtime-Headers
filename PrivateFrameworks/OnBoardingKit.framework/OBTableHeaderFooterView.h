
@interface OBTableHeaderFooterView : UIView {
    NSArray * _hostedConstraints;
    UIView * _hostedView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hostedViewPadding;
    NSArray * _internalContentConstraints;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _internalContentPadding;
    UIView * _internalContentView;
    unsigned long long  _layout;
}

@property (nonatomic, retain) NSArray *hostedConstraints;
@property (nonatomic, retain) UIView *hostedView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hostedViewPadding;
@property (nonatomic, retain) NSArray *internalContentConstraints;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } internalContentPadding;
@property (nonatomic, retain) UIView *internalContentView;
@property (nonatomic) unsigned long long layout;

- (void).cxx_destruct;
- (void)_applyLayout;
- (void)_layoutContainerForTableFooter;
- (void)_layoutContainerForTableHeader;
- (id)hostedConstraints;
- (id)hostedView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hostedViewPadding;
- (id)initWithLayout:(unsigned long long)arg1;
- (id)internalContentConstraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })internalContentPadding;
- (id)internalContentView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (unsigned long long)layout;
- (void)setHostedConstraints:(id)arg1;
- (void)setHostedView:(id)arg1;
- (void)setHostedViewPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInternalContentConstraints:(id)arg1;
- (void)setInternalContentPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInternalContentView:(id)arg1;
- (void)setLayout:(unsigned long long)arg1;

@end
