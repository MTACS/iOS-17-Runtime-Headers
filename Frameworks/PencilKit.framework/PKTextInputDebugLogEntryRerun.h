
@interface PKTextInputDebugLogEntryRerun : NSObject <PKTextInputRecognitionManagerDataSource> {
    id /* block */  _completionBlock;
    PKTextInputLanguageSpec * _languageSpec;
    PKTextInputDebugArchivedLogEntry * _logEntry;
    PKTextInputRecognitionManager * _recognitionManager;
    PKTextInputStrokeProvider * _strokeProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKTextInputDebugArchivedLogEntry *logEntry;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishRerunWithQueryItems:(id)arg1 error:(id)arg2;
- (id)initWithLogEntry:(id)arg1;
- (id)logEntry;
- (void)recognitionManager:(id)arg1 fetchContentInfoForTextInputTarget:(id)arg2 strokeIdentifiers:(id)arg3 completion:(id /* block */)arg4;
- (void)recognitionManager:(id)arg1 recognitionDidFinishWithQueryItems:(id)arg2 duration:(double)arg3;
- (id)recognitionManager:(id)arg1 textInputTargetForItemStableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 simultaneousItemStableIdentifiers:(id)arg4;
- (id)recognitionManagerStrokeProvider:(id)arg1;
- (id)recognitionManagerTextInputTargets:(id)arg1;
- (void)runWithCompletion:(id /* block */)arg1;

@end
