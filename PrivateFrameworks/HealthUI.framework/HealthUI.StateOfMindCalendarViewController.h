
@interface HealthUI.StateOfMindCalendarViewController : HealthUI.BaseCalendarViewController <HKDateCacheObserver> {
    void $__lazy_storage_$_dayFormatter;
    void $__lazy_storage_$_monthFormatter;
    void dateCache;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateToFocusOn;
    void delegate;
    void modelProvider;
    void subscriptions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  todayDayIndex;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeCategoryDidChange;
- (void)todayButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
