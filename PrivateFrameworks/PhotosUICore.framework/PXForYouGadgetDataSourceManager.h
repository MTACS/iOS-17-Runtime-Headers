
@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager {
    NSArray * _cachedForYouGadgetProviders;
    NSDictionary * _cachedUserRelevanceDateForContentIdentifiers;
    NSDate * _dateUsedForCurrentGadgetOrder;
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
}

@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic, readonly) NSDictionary *userRelevanceDateForContentIdentifiers;

- (void).cxx_destruct;
- (void)_calendarDayChanged;
- (bool)_canShowSurveyQuestionsGadget;
- (void)_invalidateCachedGadgetProviders;
- (void)_invalidateCachedUserRelevanceDates;
- (void)_pretendDateChanged;
- (id /* block */)gadgetProviderSortComparator;
- (id)gadgetProviders;
- (id /* block */)gadgetSortComparator;
- (id)init;
- (id)initWithSharedLibraryStatusProvider:(id)arg1 libraryFilterState:(id)arg2;
- (id)libraryFilterState;
- (void)removeCachedProviders;
- (id)sharedLibraryStatusProvider;
- (void)test_pretendItsTommorow;
- (id)userRelevanceDateForContentIdentifiers;

@end
