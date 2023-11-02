
@interface _UIPhysicalButtonAction : NSObject <BSDebugDescriptionProviding> {
    unsigned long long  _behavior;
    unsigned long long  _button;
    long long  _driverSource;
    unsigned long long  _state;
    double  _timestamp;
}

@property (nonatomic, readonly) unsigned long long _behavior;
@property (nonatomic, readonly) unsigned long long _button;
@property (nonatomic, readonly) unsigned long long _state;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_behavior;
- (unsigned long long)_button;
- (unsigned long long)_state;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
