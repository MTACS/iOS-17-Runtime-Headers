
@interface AKSidecarController : NSObject {
    AKAnnotation * _coalescingAnnotationChange;
    NSMutableSet * _coalescingAnnotationKeys;
    NSObject<OS_dispatch_source> * _coalescingAnnotationSource;
    AKController * _controller;
    PKStroke * _currentStroke;
    AKInkOverlayView * _currentStrokeOverlay;
    <AKSidecarControllerDelegate> * _delegate;
    bool  _handlingUndoRedo;
    bool  _ignoreKVOChanges;
    bool  _needCheckpointSent;
    NSMutableSet * _observedAnnotations;
    NSMutableSet * _observedPageModelControllers;
    bool  _sendingCheckpoint;
    bool  _shouldObserveEdits;
    NSObject<OS_dispatch_source> * _strokeTimer;
    bool  _updatingModel;
}

@property AKController *controller;
@property (nonatomic) <AKSidecarControllerDelegate> *delegate;
@property (retain) NSMutableSet *observedAnnotations;
@property (retain) NSMutableSet *observedPageModelControllers;
@property (nonatomic) bool shouldObserveEdits;

+ (bool)validateInitialMessage:(id)arg1 applicationData:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_actuallySendAnnotationChange;
- (void)_annotation:(id)arg1 addedToPageController:(unsigned long long)arg2 selected:(bool)arg3 atIndex:(unsigned long long)arg4;
- (void)_annotation:(id)arg1 modifiedInPageController:(unsigned long long)arg2 properties:(id)arg3;
- (void)_annotation:(id)arg1 removedFromPageController:(unsigned long long)arg2;
- (id)_annotationWithUUID:(id)arg1 inPageModelController:(id)arg2;
- (void)_annotationsWereAdded:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(bool)arg3;
- (void)_annotationsWillBeRemoved:(id)arg1 onPageController:(id)arg2 isUndoingRedoing:(bool)arg3;
- (void)_coalesceAnnotationChange:(id)arg1 keyChange:(id)arg2;
- (void)_handleAnnotationAdd:(id)arg1;
- (void)_handleAnnotationModify:(id)arg1;
- (void)_handleAnnotationRemove:(id)arg1;
- (void)_handleInternalFailure;
- (void)_handleLiveStrokeUpdate;
- (void)_handleRedo:(id)arg1;
- (void)_handleSelectionChanged:(id)arg1;
- (void)_handleUndo:(id)arg1;
- (void)_handleUndoCheckpoint:(id)arg1;
- (unsigned long long)_indexOfAnnotationUUID:(id)arg1 annotations:(id)arg2;
- (id)_inkAnnotationFromPageModelController:(id)arg1;
- (void)_registerObservers;
- (bool)_removeAnnotationUUID:(id)arg1 fromPageModelController:(id)arg2;
- (bool)_replaceAnnotation:(id)arg1 inPageModelController:(id)arg2;
- (void)_selectionChangedOnPageController:(id)arg1;
- (void)_sendDictionary:(id)arg1;
- (void)_startChangeUndoGroup;
- (void)_startObservingAnnotations:(id)arg1;
- (void)_stopObservingAnnotations:(id)arg1;
- (void)_unregisterObservers;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (void)done;
- (void)handleIncomingOPACKObject:(id)arg1;
- (bool)handleLiveStrokeBegan:(id)arg1 onInkOverlayView:(id)arg2;
- (void)handleLiveStrokeComplete:(bool)arg1;
- (id)initWithController:(id)arg1;
- (void)observePageControllerRequestsDisableRegistration:(id)arg1;
- (void)observePageControllerRequestsEnableRegistration:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedAnnotations;
- (id)observedPageModelControllers;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObservedAnnotations:(id)arg1;
- (void)setObservedPageModelControllers:(id)arg1;
- (void)setShouldObserveEdits:(bool)arg1;
- (bool)shouldObserveEdits;
- (void)startObservingPageModelController:(id)arg1;
- (void)stopObservingPageModelController:(id)arg1;

@end
