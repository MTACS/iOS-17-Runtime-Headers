
@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate, NUIContainerViewDelegate> {
    FUFlightViewController * _flightViewController;
    unsigned long long  _lastSelectedLegIndex;
}

@property (nonatomic, retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FUFlightViewController *flightViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastSelectedLegIndex;
@property (nonatomic, retain) SFFlightCardSection *section;
@property (readonly) Class superclass;

+ (int)defaultSeparatorStyleForRowModel:(id)arg1;
+ (bool)fillsBackgroundWithContentForRowModel:(id)arg1;

- (void).cxx_destruct;
- (void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (id)flightViewController;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (unsigned long long)lastSelectedLegIndex;
- (void)setFlightViewController:(id)arg1;
- (void)setLastSelectedLegIndex:(unsigned long long)arg1;
- (id)setupContentView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;

@end
