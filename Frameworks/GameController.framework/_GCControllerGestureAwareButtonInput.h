
@interface _GCControllerGestureAwareButtonInput : GCControllerButtonInput {
    long long  _actualSystemGestureState;
    NSMutableArray * _doublePressEventQueue;
    id /* block */  _doublePressHandler;
    float  _doublePressInterval;
    bool  _doublePressMuted;
    bool  _enabled;
    bool  _inputDisabledBySystem;
    _GCSetValueEvent * _longPressDownEvent;
    id /* block */  _longPressHandler;
    float  _longPressInterval;
    bool  _longPressMuted;
    long long  _preferredSystemGestureState;
    float  _realValue;
    int  _requiredDoublePressCount;
    _GCSetValueEvent * _singlePressDownEvent;
    id /* block */  _singlePressHandler;
    float  _singlePressInterval;
    bool  _singlePressMuted;
    bool  _useActualSystemGestureState;
}

@property (nonatomic) long long actualSystemGestureState;
@property (nonatomic, copy) id /* block */ doublePressHandler;
@property (nonatomic) float doublePressInterval;
@property (getter=isDoublePressMuted, nonatomic) bool doublePressMuted;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) bool inputDisabledBySystem;
@property (nonatomic, copy) id /* block */ longPressHandler;
@property (nonatomic) float longPressInterval;
@property (getter=isLongPressMuted, nonatomic) bool longPressMuted;
@property (nonatomic, copy) id /* block */ singlePressHandler;
@property (nonatomic) float singlePressInterval;
@property (getter=isSinglePressMuted, nonatomic) bool singlePressMuted;

- (void).cxx_destruct;
- (void)__onqueue_executeDoublePressRecognizerForEvent:(id)arg1 queue:(id)arg2;
- (void)__onqueue_executeLongPressRecognizerForEvent:(id)arg1 queue:(id)arg2;
- (void)__onqueue_executeSinglePressRecognizerForEvent:(id)arg1 queue:(id)arg2;
- (void)__onqueue_forwardEvent:(id)arg1 queue:(id)arg2;
- (bool)_commitPendingValueOnQueue:(id)arg1;
- (bool)_setValue:(float)arg1 queue:(id)arg2;
- (long long)actualSystemGestureState;
- (id /* block */)doublePressHandler;
- (float)doublePressInterval;
- (id)initWithDescriptionName:(id)arg1;
- (bool)inputDisabledBySystem;
- (bool)isDoublePressGestureRecognizerEnabled;
- (bool)isDoublePressMuted;
- (bool)isEnabled;
- (bool)isLongPressGestureRecognizerEnabled;
- (bool)isLongPressMuted;
- (bool)isSinglePressGestureRecognizerEnabled;
- (bool)isSinglePressMuted;
- (id /* block */)longPressHandler;
- (float)longPressInterval;
- (long long)preferredSystemGestureState;
- (void)registerSetValueEvent:(float)arg1 queue:(id)arg2;
- (void)setActualSystemGestureState:(long long)arg1;
- (void)setDoublePressHandler:(id /* block */)arg1;
- (void)setDoublePressInterval:(float)arg1;
- (void)setDoublePressMuted:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInputDisabledBySystem:(bool)arg1;
- (void)setLongPressHandler:(id /* block */)arg1;
- (void)setLongPressInterval:(float)arg1;
- (void)setLongPressMuted:(bool)arg1;
- (void)setPreferredSystemGestureState:(long long)arg1;
- (void)setSinglePressHandler:(id /* block */)arg1;
- (void)setSinglePressInterval:(float)arg1;
- (void)setSinglePressMuted:(bool)arg1;
- (void)setValue:(float)arg1;
- (id /* block */)singlePressHandler;
- (float)singlePressInterval;

@end
