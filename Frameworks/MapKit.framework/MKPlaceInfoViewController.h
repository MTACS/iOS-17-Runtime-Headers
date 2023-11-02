
@interface MKPlaceInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, UIGestureRecognizerDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <MKPlaceActionManagerProtocol> * _actionDelegate;
    bool  _bottomHairlineHidden;
    MKMapItem * _mapItem;
    <_MKPlaceItem> * _placeItem;
    unsigned long long  _placecardOptions;
    NSMutableArray * _rows;
    MKPlaceSectionRowView * _selectedRow;
}

@property (nonatomic) <MKPlaceActionManagerProtocol> *actionDelegate;
@property (nonatomic) bool bottomHairlineHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) <_MKPlaceItem> *placeItem;
@property (nonatomic) unsigned long long placecardOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addContactRow:(id)arg1 ofType:(unsigned long long)arg2 toViews:(id)arg3 defaultTitle:(id)arg4;
- (id)_addRowForType:(unsigned long long)arg1 withValue:(id)arg2 toViews:(id)arg3;
- (bool)_canShowWhileLocked;
- (void)_configureRow:(id)arg1 ofType:(unsigned long long)arg2 withValue:(id)arg3;
- (id)_createViewForInfoRow:(unsigned long long)arg1;
- (void)_launchMapsDirectionsWithSource:(id)arg1 destination:(id)arg2 directionsMode:(id)arg3;
- (void)_shareAddress:(id)arg1 fromView:(id)arg2;
- (void)_updateViewsAnimated:(bool)arg1;
- (id)actionDelegate;
- (unsigned long long)actionTypeFromRowType:(unsigned long long)arg1;
- (bool)bottomHairlineHidden;
- (id)contact;
- (bool)hasContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithPlaceItem:(id)arg1;
- (id)mapItem;
- (id)placeItem;
- (unsigned long long)placecardOptions;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setActionDelegate:(id)arg1;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPlaceItem:(id)arg1;
- (void)setPlacecardOptions:(unsigned long long)arg1;
- (bool)shouldShowDetails;
- (void)viewDidLoad;

@end
