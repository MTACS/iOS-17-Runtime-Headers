
@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker {
    NSObject<NSCopying> * _cancelledWorkItem;
    PLSpotlightDonationManager * _donationManager;
    PLSearchIndexConfiguration * _searchIndexConfiguration;
    PLSearchTrackedChangeTypes * _searchTrackedChangeTypes;
}

@property (copy) NSObject<NSCopying> *cancelledWorkItem;
@property (nonatomic, retain) PLSpotlightDonationManager *donationManager;
@property (nonatomic, retain) PLSearchIndexConfiguration *searchIndexConfiguration;
@property (nonatomic, retain) PLSearchTrackedChangeTypes *searchTrackedChangeTypes;

+ (bool)_isTokenInvalidError:(id)arg1;
+ (id)_transactionIteratorSinceToken:(id)arg1 library:(id)arg2 error:(id*)arg3;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (void)_beginSearchIndexRebuildForLibrary:(id)arg1 item:(id)arg2 rebuildReasons:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (bool)_handleChangesForTransaction:(id)arg1 library:(id)arg2;
- (void)_resetCancelledWorkItem;
- (unsigned long long)_resetSpotlightIndexForLibrary:(id)arg1;
- (void)_resumeSearchIndexRebuildForLibrary:(id)arg1 item:(id)arg2 completion:(id /* block */)arg3;
- (bool)_shouldCancelCurrentWorkItem:(id)arg1;
- (id)cancelledWorkItem;
- (id)donationManager;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (id)searchIndexConfiguration;
- (id)searchTrackedChangeTypes;
- (void)setCancelledWorkItem:(id)arg1;
- (void)setDonationManager:(id)arg1;
- (void)setSearchIndexConfiguration:(id)arg1;
- (void)setSearchTrackedChangeTypes:(id)arg1;
- (void)stopWorkingOnItem:(id)arg1;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
