
@interface MUExpandableHoursView : MUPlaceSectionRowView <MUStackable> {
    MUBusinessHoursConfiguration * _config;
    MUStackView * _contentStackView;
    NSArray * _dayRowViewModels;
    NSArray * _dayRowViews;
    <MUExpandableHoursViewDelegate> * _delegate;
    bool  _expanded;
    MUHoursSummaryView * _hoursSummaryView;
    bool  _stacked;
    MUStackLayout * _summaryAndHoursStackLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUExpandableHoursViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUBusinessHoursConfiguration *hoursConfiguration;
@property (getter=isStacked, nonatomic) bool stacked;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDayRowViewsToStackViewIfNeeded;
- (void)_buildDayRowViewModels;
- (void)_createDayRowViewsIfNeeded;
- (void)_invokeChildrenOfStackingChange;
- (void)_setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)_setupStackView;
- (void)_updateHoursVisibilityAnimated:(bool)arg1;
- (id)delegate;
- (id)hoursConfiguration;
- (id)initWithBusinessHoursConfiguration:(id)arg1;
- (bool)isExpanded;
- (bool)isStacked;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setStacked:(bool)arg1;
- (bool)shouldStackForProposedWidth:(double)arg1;

@end
