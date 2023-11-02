
@interface GCKeyboardInput : GCPhysicalInputProfile <_GCKeyboardEventSink> {
    NSSet * _allCodes;
    id /* block */  _keyChangedHandler;
    id /* block */  _keyChangedHandlerPrivate;
    id  _keyboardEventObservation;
    NSArray * _keys;
    int  _numberOfKeysPressed;
}

@property (getter=isAnyKeyPressed, nonatomic, readonly) bool anyKeyPressed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ keyChangedHandler;
@property (nonatomic, copy) id /* block */ keyChangedHandlerPrivate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buttonForKeyCode:(long long)arg1;
- (void)handleKeyboardEvent:(id)arg1;
- (bool)hasButton:(long long)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isAnyKeyPressed;
- (id /* block */)keyChangedHandler;
- (id /* block */)keyChangedHandlerPrivate;
- (id)name;
- (void)setKeyChangedHandler:(id /* block */)arg1;
- (void)setKeyChangedHandlerPrivate:(id /* block */)arg1;
- (void)setKeyboardEventSource:(id)arg1;

@end
