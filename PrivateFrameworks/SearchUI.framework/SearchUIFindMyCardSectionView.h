
@interface SearchUIFindMyCardSectionView : SearchUICardSectionView <FMFMapViewControllerDelegate> {
    CNContact * _contact;
    TLKLabel * _locationLabel;
    TLKLabel * _timeLabel;
    FMUILocationDetailViewController * _viewController;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKLabel *locationLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKLabel *timeLabel;
@property (nonatomic, retain) FMUILocationDetailViewController *viewController;

+ (bool)fillsBackgroundWithContentForRowModel:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)contact;
- (id)embeddedViewController;
- (id)locationLabel;
- (void)setContact:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)setupContentView;
- (id)timeLabel;
- (void)updateWithRowModel:(id)arg1;
- (id)viewController;

@end
