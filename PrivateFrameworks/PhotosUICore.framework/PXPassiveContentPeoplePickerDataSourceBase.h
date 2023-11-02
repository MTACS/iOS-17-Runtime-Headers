
@interface PXPassiveContentPeoplePickerDataSourceBase : NSObject <PHPhotoLibraryChangeObserver> {
    NSHashTable * _changeObservers;
    NSObject<OS_os_log> * _log;
    NSArray * _nonVIPPersons;
    PHFetchResult * _nonVIPPersonsFetchResult;
    PHFetchResult * _peopleSuggestions;
    PHPhotoLibrary * _photoLibrary;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
    NSArray * _vipPersons;
    PHFetchResult * _vipPersonsFetchResult;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSHashTable *changeObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (retain) NSArray *nonVIPPersons;
@property (nonatomic, retain) PHFetchResult *nonVIPPersonsFetchResult;
@property (nonatomic, retain) PHFetchResult *peopleSuggestions;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PHUserFeedbackCalculator *userFeedbackCalculator;
@property (retain) NSArray *vipPersons;
@property (nonatomic, retain) PHFetchResult *vipPersonsFetchResult;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_fetchPeople;
- (void)_fetchPeopleWallpaperSuggestions;
- (void)addChangeObserver:(id)arg1;
- (id)changeObservers;
- (void)computeAndCachePersonsWithPersonLocalIdentifierWithNegativeFeedback:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)log;
- (id)nonVIPPersons;
- (id)nonVIPPersonsFetchResult;
- (void)notifyChanges;
- (id)peopleSuggestionSubtypes;
- (id)peopleSuggestions;
- (id)photoLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (void)removeChangeObserver:(id)arg1;
- (void)setNonVIPPersons:(id)arg1;
- (void)setNonVIPPersonsFetchResult:(id)arg1;
- (void)setPeopleSuggestions:(id)arg1;
- (void)setVipPersons:(id)arg1;
- (void)setVipPersonsFetchResult:(id)arg1;
- (void)startBackgroundFetch;
- (id)userFeedbackCalculator;
- (id)vipPersons;
- (id)vipPersonsFetchResult;
- (id)workQueue;

@end
