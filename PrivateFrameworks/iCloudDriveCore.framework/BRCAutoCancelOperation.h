
@interface BRCAutoCancelOperation : _BRCOperation <BRCOperationSubclass> {
    NSObject<OS_dispatch_source> * _cancelTimer;
    NSObject<OS_dispatch_group> * _observersGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_initializeCancelTimer;
- (void)beginObservingChanges;
- (id)createActivity;
- (void)dealloc;
- (void)endObservingChanges;
- (bool)hasObservers;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
