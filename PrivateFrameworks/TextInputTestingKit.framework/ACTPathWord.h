
@interface ACTPathWord : ACTUserAction {
    id /* block */  _callback;
    bool  _fromUserData;
    NSString * _intendedString;
    TTKKeyboardPlane * _keyplane;
    TIContinuousPath * _path;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly) bool fromUserData;
@property (nonatomic, readonly) NSString *intendedString;
@property (nonatomic, readonly) TTKKeyboardPlane *keyplane;
@property (nonatomic, readonly) TIContinuousPath *path;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id /* block */)callback;
- (id)description;
- (bool)fromUserData;
- (id)initWithPath:(id)arg1 intendedString:(id)arg2 keyplane:(id)arg3 fromUserData:(bool)arg4;
- (id)intendedString;
- (id)keyplane;
- (id)path;
- (void)setCallback:(id /* block */)arg1;

@end
