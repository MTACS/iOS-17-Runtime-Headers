
@interface HFAnalyticsSectionReorderingEvent : HFAnalyticsEvent {
    NSNumber * _numberOfSections;
    NSString * _reorderingAction;
}

@property (nonatomic, retain) NSNumber *numberOfSections;
@property (nonatomic, retain) NSString *reorderingAction;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)numberOfSections;
- (id)payload;
- (id)reorderingAction;
- (void)setNumberOfSections:(id)arg1;
- (void)setReorderingAction:(id)arg1;

@end
