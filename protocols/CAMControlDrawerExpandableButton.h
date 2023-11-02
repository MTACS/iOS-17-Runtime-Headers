
@protocol CAMControlDrawerExpandableButton

@required

- (<CAMControlDrawerExpandableButtonDelegate> *)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expansionInsets;
- (bool)isExpanded;
- (void)setDelegate:(id <CAMControlDrawerExpandableButtonDelegate>)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setExpansionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
