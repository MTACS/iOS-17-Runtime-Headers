
@interface SearchUIHorizontallyScrollingMoreResultsButtonController : SearchUIHorizontallyScrollingButtonController {
    TLKProminenceView * _backgroundView;
}

@property (retain) TLKProminenceView *backgroundView;
@property (retain) TLKTextButton *button;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)init;
- (void)setBackgroundView:(id)arg1;
- (void)setCardSectionRowModel:(id)arg1;

@end
