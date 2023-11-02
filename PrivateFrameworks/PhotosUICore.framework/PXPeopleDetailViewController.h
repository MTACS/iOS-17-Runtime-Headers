
@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver> {
    NSArray * _people;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *people;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_launchNaming:(id)arg1;
- (void)_replaceSelfWithNewDetailViewForPerson:(id)arg1;
- (void)_setupHeader;
- (void)_updateDataSourceWithCollectionForPerson:(id)arg1;
- (void)_updateHeader;
- (id)initWithPeople:(id)arg1 ignoreSharedLibraryFilters:(bool)arg2;
- (id)initWithPeople:(id)arg1 options:(unsigned long long)arg2 ignoreSharedLibraryFilters:(bool)arg3;
- (id)people;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)arg1;
- (bool)pu_shouldOptOutFromChromelessBars;
- (void)refreshName;
- (void)setPeople:(id)arg1;
- (bool)shouldUpdateStatusBarTitle;
- (void)viewDidLoad;

@end
