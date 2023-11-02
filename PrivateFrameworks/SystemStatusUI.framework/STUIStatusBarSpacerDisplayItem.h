
@interface STUIStatusBarSpacerDisplayItem : STUIStatusBarDisplayItem {
    NSArray * _constraints;
    UILayoutGuide * _layoutGuide;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UILayoutGuide *layoutGuide;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (void)_applyConstraintsIfNeeded;
- (void)applyUpdate:(id)arg1;
- (id)constraints;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;
- (id)layoutGuide;
- (void)setConstraints:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setLayoutGuide:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
