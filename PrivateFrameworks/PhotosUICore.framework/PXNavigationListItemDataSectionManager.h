
@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXChangeObserver, PXCollectionFetchOperationDelegate, PXDataSectionManagerEnabling, PXPhotoLibraryUIChangeObserver> {
    PHCollection * _collection;
    PXSidebarDataContext * _context;
    bool  _enabled;
    PXDataSectionEnablementForwarder * _enablementForwarder;
    PHFetchResult * _fetchResult;
    bool  _hiddenWhenEmpty;
    bool  _isInitialDuplicateDetectorProcessingCompleted;
    NSDate * _lastDuplicatesProcessingCheckDate;
    PXLibraryFilterState * _libraryFilterState;
    <PXNavigationListItem> * _listItem;
    unsigned long long  _lockState;
    PXContentPrivacyController * _privacyController;
}

@property (nonatomic, readonly) PHCollection *collection;
@property (getter=isCollectionEmpty, nonatomic, readonly) bool collectionEmpty;
@property (getter=isCollectionVisible, nonatomic, readonly) bool collectionVisible;
@property (nonatomic, readonly) PXSidebarDataContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) PXDataSectionEnablementForwarder *enablementForwarder;
@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenWhenEmpty, nonatomic) bool hiddenWhenEmpty;
@property (nonatomic) bool isInitialDuplicateDetectorProcessingCompleted;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) <PXNavigationListItem> *listItem;
@property (nonatomic) unsigned long long lockState;
@property (nonatomic, readonly) PXContentPrivacyController *privacyController;
@property (readonly) Class superclass;

+ (unsigned long long)lockStateFromPrivacyController:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsEmptyDataSection;
- (id)collection;
- (void)collectionFetchOperationDidComplete:(id)arg1;
- (id)context;
- (id)createDataSection;
- (id)description;
- (id)enablementForwarder;
- (id)fetchResult;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithCollection:(id)arg1 context:(id)arg2;
- (id)initWithItem:(id)arg1;
- (bool)isCollectionEmpty;
- (bool)isCollectionVisible;
- (bool)isEnabled;
- (bool)isHiddenWhenEmpty;
- (bool)isInitialDuplicateDetectorProcessingCompleted;
- (id)libraryFilterState;
- (id)listItem;
- (unsigned long long)lockState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)privacyController;
- (void)setEnabled:(bool)arg1;
- (void)setEnablementForwarder:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setHiddenWhenEmpty:(bool)arg1;
- (void)setIsInitialDuplicateDetectorProcessingCompleted:(bool)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (bool)shouldInvalidateDataSectionForChildDataSectionManager:(id)arg1 changeDescriptor:(unsigned long long)arg2;
- (void)updateDataSectionIfNecessary;

@end
