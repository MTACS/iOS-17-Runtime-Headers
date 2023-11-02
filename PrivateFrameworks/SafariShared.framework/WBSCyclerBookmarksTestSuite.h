
@interface WBSCyclerBookmarksTestSuite : NSObject <WBSCyclerOperationalTestSuite> {
    WBSCyclerTestSuiteBookmarkAuxiliary * _bookmarkAuxiliary;
    WBSCyclerItemListRepresentation * _expectedTopLevelBookmarksFromPreviousIteration;
    WBSCyclerIterationCounter * _iterationCounter;
    WBSCyclerOperationContext * _operationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSCyclerIterationCounter *iterationCounter;
@property (nonatomic, readonly, copy) NSArray *operations;
@property (readonly) Class superclass;

+ (bool)setValue:(id)arg1 forConfigurationKey:(id)arg2;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (void)_performCloudKitSecondaryMigrationAfterClearingBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_performFinalServerBookmarkValidationAfterClearingAndSyncingWithInitialBookmarks:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateServerBookmarksAfterClearingLocallyWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_validateServerBookmarksAfterInitialSyncWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_validateServerBookmarksWithTarget:(id)arg1 initialBookmarks:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)canHandleRequest:(id)arg1;
- (void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)iterationCounter;
- (id)operations;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:(id)arg1;
- (void)runWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setIterationCounter:(id)arg1;
- (void)setUp;
- (void)tearDown;

@end
