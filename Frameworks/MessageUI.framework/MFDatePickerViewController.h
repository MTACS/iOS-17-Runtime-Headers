
@interface MFDatePickerViewController : UIViewController <MFCalendarCollectionViewCellDelegate, MFSendLaterHeaderCollectionViewCellDelegate, MFTimeHeaderCollectionViewCellDelegate, MFTimeWheelCollectionViewCellDelegate, MFTimeZonePickerViewControllerDelegate, UICollectionViewDelegate> {
    EFLocked * _allItems;
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    <MFDatePickerViewControllerDelegate> * _delegate;
    NSDate * _initialDate;
    EFLocked * _items;
    EMMessage * _message;
    bool  _shouldInvokeDelegate;
    bool  _shouldShowDeleteButton;
    bool  _timeSwitchEnabled;
    long long  _type;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property (nonatomic, retain) EFLocked *allItems;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFDatePickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *initialDate;
@property (nonatomic, retain) EFLocked *items;
@property (nonatomic, retain) EMMessage *message;
@property (nonatomic) bool shouldInvokeDelegate;
@property (nonatomic) bool shouldShowDeleteButton;
@property (readonly) Class superclass;
@property (nonatomic) bool timeSwitchEnabled;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateQueue;

+ (id)datePickerViewControllerWithType:(long long)arg1 message:(id)arg2;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_datePicked:(id)arg1;
- (id)_itemOfType:(unsigned long long)arg1;
- (id)_itemWithIdentifier:(id)arg1;
- (id)_selectedDateForTimeWheelFromDate:(id)arg1;
- (id)_selectedTimeForTimeWheelFromDate:(id)arg1;
- (id)allItems;
- (void)calendarCollectionViewCell:(id)arg1 didChangeDate:(id)arg2;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)createCollectionViewLayout;
- (id)dataSource;
- (void)datePickerTimeHeaderCollectionViewCell:(id)arg1 showTime:(bool)arg2;
- (id)delegate;
- (id)initWithType:(long long)arg1 shouldShowDeleteButton:(bool)arg2 initialDate:(id)arg3;
- (id)initWithType:(long long)arg1 shouldShowDeleteButton:(bool)arg2 initialDate:(id)arg3 shouldDismissCommit:(bool)arg4;
- (id)initialDate;
- (id)items;
- (id)message;
- (void)sendLaterHeaderCollectionViewCellDateTapped:(id)arg1;
- (void)sendLaterHeaderCollectionViewCellTimeTapped:(id)arg1;
- (void)setAllItems:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialDate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShouldInvokeDelegate:(bool)arg1;
- (void)setShouldShowDeleteButton:(bool)arg1;
- (void)setTimeSwitchEnabled:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setUpDataSourceForCollectionView:(id)arg1;
- (void)setUpItemsProvider;
- (void)setUpNavigationBar;
- (void)setUpdateQueue:(id)arg1;
- (bool)shouldInvokeDelegate;
- (bool)shouldShowDeleteButton;
- (void)timeCollectionViewCell:(id)arg1 didChangeDate:(id)arg2;
- (bool)timeSwitchEnabled;
- (void)timeZonePickerViewController:(id)arg1 chooseTimeZone:(id)arg2 cityName:(id)arg3;
- (long long)type;
- (id)updateQueue;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
