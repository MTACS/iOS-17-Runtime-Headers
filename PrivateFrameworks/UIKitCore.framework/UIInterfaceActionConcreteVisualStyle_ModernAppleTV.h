
@interface UIInterfaceActionConcreteVisualStyle_ModernAppleTV : UIInterfaceActionConcreteVisualStyle_AppleTV

- (double)_actionBackgroundCornerRadius;
- (id)_vibrancyStyleColorForUnfocusedTitleLabelWithTintColor:(id)arg1;
- (double)actionSectionSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionSequenceEdgeInsets;
- (double)actionSpacingForGroupViewState:(id)arg1;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)actionTitleLabelCompositingFilterForViewState:(id)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;
- (bool)allowsZeroSizedSectionSeparators;
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;
- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentMargin;
- (struct CGSize { double x1; double x2; })minimumActionContentSize;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;

@end
