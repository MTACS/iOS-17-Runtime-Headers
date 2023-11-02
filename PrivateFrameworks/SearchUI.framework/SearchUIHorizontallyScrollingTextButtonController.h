
@interface SearchUIHorizontallyScrollingTextButtonController : SearchUIHorizontallyScrollingButtonController <NUIContainerViewDelegate>

@property (nonatomic, retain) TLKTextButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NUIContainerStackView *view;

- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (id)init;
- (bool)scrollsWithoutStoppingAtBoundaries;
- (void)setCardSectionRowModel:(id)arg1;
- (bool)wantsSeparators;

@end
