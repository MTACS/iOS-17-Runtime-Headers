
@interface PXUndoActionsInvalidator : NSObject <PXChangeObserver> {
    bool  _observingApplicationState;
    PXContentPrivacyController * _privacyController;
    bool  _timerDidClearUndoStack;
    NSTimer * _undoClearingTimer;
    NSUndoManager * _undoManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isObservingApplicationState, nonatomic) bool observingApplicationState;
@property (nonatomic, retain) PXContentPrivacyController *privacyController;
@property (readonly) Class superclass;
@property (nonatomic) bool timerDidClearUndoStack;
@property (nonatomic, retain) NSTimer *undoClearingTimer;
@property (nonatomic, retain) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (void)beginObservingSystemEventsForAutomaticInvalidation;
- (void)clearUndoClearingTimer;
- (void)clearUndoStack;
- (void)dealloc;
- (id)initWithUndoManager:(id)arg1 privacyController:(id)arg2;
- (void)invalidateUndoTimerIfNeeded;
- (bool)isObservingApplicationState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)privacyController;
- (void)setObservingApplicationState:(bool)arg1;
- (void)setPrivacyController:(id)arg1;
- (void)setTimerDidClearUndoStack:(bool)arg1;
- (void)setUndoClearingTimer:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (void)startUndoClearingTimer;
- (void)stopObservingSystemEventsForAutomaticInvalidation;
- (bool)timerDidClearUndoStack;
- (id)undoClearingTimer;
- (void)undoClearingTimerFired;
- (id)undoManager;

@end
