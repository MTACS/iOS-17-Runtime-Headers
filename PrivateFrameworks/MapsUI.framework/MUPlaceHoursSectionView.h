
@interface MUPlaceHoursSectionView : MUPlaceVerticalCardContainerView <MUExpandableHoursViewDelegate, MUPlaceVerticalCardContainerViewDelegate> {
    <MUPlaceHoursSectionViewDelegate> * _expandDelegate;
    NSArray * _hoursViews;
    UIView<MULabelViewProtocol> * _moreLabel;
    MUPlaceSectionRowView * _moreRowView;
    MUPlaceHoursSectionViewConfiguration * _sectionViewConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MUPlaceHoursSectionViewDelegate> *expandDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUPlaceHoursSectionViewConfiguration *sectionViewConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performExpansion;
- (void)_recalculateStackingIfNeeded;
- (void)_setupViews;
- (id)expandDelegate;
- (void)expandableHoursViewDidExpand:(id)arg1;
- (id)initWithSectionViewConfiguration:(id)arg1;
- (void)layoutSubviews;
- (id)sectionViewConfiguration;
- (void)setExpandDelegate:(id)arg1;
- (void)verticalCardContainerView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;

@end
