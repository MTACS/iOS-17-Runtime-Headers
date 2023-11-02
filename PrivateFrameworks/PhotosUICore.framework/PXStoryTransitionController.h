
@interface PXStoryTransitionController : PXStoryController <PXChangeObserver, PXStoryDiagnosticHUDContentProvider, PXStoryMutableTransitionController, PXTapToRadarDiagnosticProvider> {
    NSMutableArray * _activeClipTransitions;
    struct { 
        long long fromSegmentIdentifier; 
        long long toSegmentIdentifier; 
    }  _activeTransition;
    NSError * _currentError;
    long long  _currentSegmentIdentifier;
    PXGEntityManager * _entityManager;
    NSArray * _interruptedTransitionErrorDescriptions;
    PXStoryModel * _model;
    PXStoryTransitionModel * _pendingTransitionModel;
    PXStoryTransitionProducer * _transitionProducer;
    <PXStoryTransitionSource> * _transitionSource;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } activeTransition;
@property (nonatomic, retain) NSError *currentError;
@property (nonatomic) long long currentSegmentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PXGEntityManager *entityManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *interruptedTransitionErrorDescriptions;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) PXStoryTransitionModel *pendingTransitionModel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PXStoryTransitionSource> *transitionSource;

+ (bool)_isSupportedTransitionWithKind:(BOOL)arg1 forClipWithResourceKind:(long long)arg2;

- (void).cxx_destruct;
- (bool)_canStartTransitionWithKind:(BOOL)arg1;
- (void)_handleTransitionCompleted:(id)arg1;
- (void)_interruptActiveTransitions;
- (void)_reportInterruptedTransitionForNewTransitionBetweenSegmentWithIdentifier:(long long)arg1 andSegmentWithIdentifier:(long long)arg2;
- (void)_startTransition:(id)arg1;
- (void)_updateCurrentSegmentIdentifierIfNeeded;
- (void)_updatePendingTransitionModelWithSegmentTransitionInfo:(struct { long long x1; long long x2; })arg1;
- (struct { long long x1; long long x2; })activeTransition;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (id)currentError;
- (long long)currentSegmentIdentifier;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (id)entityManager;
- (void)enumerateClipIdentifiersForActiveTransitionsUsingBlock:(id /* block */)arg1;
- (void)enumerateClipIdentifiersForPendingTransitionUsingBlock:(id /* block */)arg1;
- (id)initWithModel:(id)arg1 transitionSource:(id)arg2;
- (id)interruptedTransitionErrorDescriptions;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pendingTransitionModel;
- (void)performChanges:(id /* block */)arg1;
- (void)setActiveTransition:(struct { long long x1; long long x2; })arg1;
- (void)setCurrentError:(id)arg1;
- (void)setCurrentSegmentIdentifier:(long long)arg1;
- (void)setCurrentSegmentIdentifier:(long long)arg1 allowTransitions:(bool)arg2;
- (void)setEntityManager:(id)arg1;
- (void)setInterruptedTransitionErrorDescriptions:(id)arg1;
- (void)setPendingTransitionModel:(id)arg1;
- (void)startPendingTransitionIfNeeded;
- (id)transitionSource;

@end
