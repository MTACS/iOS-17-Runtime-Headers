
@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject {
    unsigned long long  _currentState;
    bool  _isFirstResponder;
    unsigned long long  _lastDistinctState;
    unsigned long long  _previousState;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) unsigned long long currentState;
@property (nonatomic, readonly) unsigned long long*currentStateRef;
@property (nonatomic) bool isFirstResponder;
@property (nonatomic, readonly) unsigned long long lastDistinctState;
@property (nonatomic, readonly) unsigned long long previousState;

- (void).cxx_destruct;
- (void)_updateFromState:(unsigned long long)arg1;
- (bool)currentSateCanTransitionWithEvents:(id)arg1;
- (unsigned long long)currentState;
- (unsigned long long*)currentStateRef;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (bool)isFirstResponder;
- (unsigned long long)lastDistinctState;
- (unsigned long long)previousState;
- (void)setIsFirstResponder:(bool)arg1;

@end
