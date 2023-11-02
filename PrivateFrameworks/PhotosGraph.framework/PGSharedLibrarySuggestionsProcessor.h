
@interface PGSharedLibrarySuggestionsProcessor : NSObject {
    PHLibraryScope * _libraryScope;
    NSArray * _libraryScopeRules;
    PGManagerWorkingContext * _workingContext;
}

+ (id)libraryScopeToUseWithPhotoLibrary:(id)arg1;
+ (bool)shouldIncludeAsset:(id)arg1 curationContext:(id)arg2 rejectionReason:(id*)arg3;

- (void).cxx_destruct;
- (bool)_commitSuggestedAssets:(id)arg1 rejectedAssets:(id)arg2 libraryScope:(id)arg3 error:(id*)arg4;
- (id)_momentsForMomentNodes:(id)arg1 inPhotoLibrary:(id)arg2;
- (bool)_processMomentNodes:(id)arg1 withGraph:(id)arg2 error:(id*)arg3 progressBlock:(id /* block */)arg4;
- (id)_rulesForLibraryScope:(id)arg1;
- (id)_startDateFromLibraryScopeRules:(id)arg1;
- (bool)_suggestAssetsFromMoments:(id)arg1 libraryScope:(id)arg2 curationContext:(id)arg3 progressBlock:(id /* block */)arg4 error:(id*)arg5;
- (id)evaluatorWithGraph:(id)arg1;
- (id)initWithWorkingContext:(id)arg1 libraryScope:(id)arg2;
- (bool)processSuggestionsForIncrementalChange:(id)arg1 withError:(id*)arg2 progressBlock:(id /* block */)arg3;
- (bool)processSuggestionsFromStartDate:(id)arg1 toDate:(id)arg2 withError:(id*)arg3 progressBlock:(id /* block */)arg4;

@end
