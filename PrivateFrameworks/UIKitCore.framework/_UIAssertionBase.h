
@interface _UIAssertionBase : NSObject <_UIAssertion> {
    bool  _initialState;
    bool  _invalidated;
    _UIAssertionController * _parentController;
    NSString * _reason;
    bool  _requiresExplicitInvalidation;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool initialState;
@property (nonatomic, readonly) bool invalidated;
@property (nonatomic) _UIAssertionController *parentController;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) bool requiresExplicitInvalidation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)arg1 initialState:(bool)arg2 reason:(id)arg3 requiresExplicitInvalidation:(bool)arg4;
- (void)_invalidate;
- (void)dealloc;
- (id)description;
- (bool)initialState;
- (bool)invalidated;
- (id)parentController;
- (id)reason;
- (bool)requiresExplicitInvalidation;
- (void)setParentController:(id)arg1;
- (unsigned long long)type;

@end
