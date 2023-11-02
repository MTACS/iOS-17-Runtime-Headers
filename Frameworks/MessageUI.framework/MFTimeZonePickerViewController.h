
@interface MFTimeZonePickerViewController : UIViewController <EFLoggable, UICollectionViewDelegate, UISearchResultsUpdating> {
    UICollectionView * _collectionView;
    NSString * _currentCityName;
    NSArray * _currentFilteredTimeZones;
    NSTimeZone * _currentTimeZone;
    UICollectionViewDiffableDataSource * _dataSource;
    <MFTimeZonePickerViewControllerDelegate> * _delegate;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) NSString *currentCityName;
@property (nonatomic, retain) NSArray *currentFilteredTimeZones;
@property (nonatomic, retain) NSTimeZone *currentTimeZone;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFTimeZonePickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)createCollectionViewLayout;
- (id)currentCityName;
- (id)currentFilteredTimeZones;
- (id)currentTimeZone;
- (id)dataSource;
- (id)delegate;
- (id)initWithTimeZone:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCurrentCityName:(id)arg1;
- (void)setCurrentFilteredTimeZones:(id)arg1;
- (void)setCurrentTimeZone:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateCurrentTimeZoneCity:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
