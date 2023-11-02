
@interface DNDToggleManager : NSObject {
    DNDModeAssertionService * _modeAssertionService;
    DNDStateService * _stateService;
    NSString * _toggleAssertionIdentifier;
}

@property (nonatomic, copy) NSString *toggleAssertionIdentifier;

+ (void)initialize;
+ (id)managerForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_toggleDNDOffReturningError:(id*)arg1;
- (bool)_toggleDNDOnReturningError:(id*)arg1;
- (id)initWithModeAssertionService:(id)arg1 stateService:(id)arg2;
- (void)setToggleAssertionIdentifier:(id)arg1;
- (id)toggleAssertionIdentifier;
- (bool)toggleToTargetState:(unsigned long long)arg1 error:(id*)arg2;

@end
