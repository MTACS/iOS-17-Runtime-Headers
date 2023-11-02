
@interface WFHealthQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {
    WFAction * _action;
    NSArray * _possibleUnits;
    HKQuantityType * _quantityType;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)attributesDidChange;
- (bool)isHidden;
- (id)localizedLabel;
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;
- (id)localizedPrompt;
- (id)possibleUnits;
- (id)quantityType;
- (void)setAction:(id)arg1;
- (void)setPossibleUnits:(id)arg1;
- (void)updatePossibleUnits;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
