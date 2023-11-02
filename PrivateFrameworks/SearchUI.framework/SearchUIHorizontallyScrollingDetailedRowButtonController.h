
@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController {
    SearchUIDetailedView * _detailedView;
}

@property (nonatomic, retain) SearchUIDetailedView *detailedView;

- (void).cxx_destruct;
- (id)detailedView;
- (void)setCardSectionRowModel:(id)arg1;
- (void)setDetailedView:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;
- (double)spacing;

@end
