
@interface UIForceStageInteractionProgress : UIInteractionProgress <NSObservable, NSObserver> {
    bool  _completed;
    bool  _completesAtTargetState;
    NSObservation * _observation;
    bool  _started;
}

@property (nonatomic) bool completesAtTargetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reset;
- (bool)completesAtTargetState;
- (void)dealloc;
- (id)init;
- (void)receiveObservedValue:(id)arg1;
- (void)setCompletesAtTargetState:(bool)arg1;

@end
