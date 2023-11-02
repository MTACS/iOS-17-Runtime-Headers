
@interface WFIconComposePreviewView : WFIconView {
    WFWorkflowIconDrawer * _iconDrawer;
}

@property (nonatomic, retain) WFWorkflowIconDrawer *iconDrawer;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)iconDrawer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)redrawIcon;
- (void)setIcon:(id)arg1;
- (void)setIconDrawer:(id)arg1;

@end
