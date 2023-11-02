
@interface BYMultitaskingGestures : NSObject {
    BYPreferencesController * _preferencesController;
}

@property (nonatomic, readonly) bool multitaskingWasCompleted;
@property (nonatomic, readonly) bool multitaskingWasTurnedOff;
@property (nonatomic, retain) BYPreferencesController *preferencesController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPreferencesController:(id)arg1;
- (bool)multitaskingWasCompleted;
- (bool)multitaskingWasTurnedOff;
- (id)preferencesController;
- (void)setMultitaskingWasTurnedOff:(bool)arg1;
- (void)setPreferencesController:(id)arg1;

@end
