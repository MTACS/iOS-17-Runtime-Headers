
@interface MapsUI.TransitDeparturesContainerSectionView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate> {
    void departuresContainer;
    void rowFeedbackDelegate;
}

- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_resolvedBottomSeparatorInsetsForView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithShowsSeparators:(bool)arg1;
- (void)verticalCardContainerView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)verticalCardContainerView:(id)arg1 shouldHighlightRowAtIndex:(unsigned long long)arg2;

@end
