
@interface WFHFTriggerActionSetsBuilderParameterState : NSObject <WFParameterState> {
    NSString * _homeIdentifier;
    NSArray * _serializedActionSets;
}

@property (nonatomic, readonly) NSArray *actionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly, copy) NSString *homeIdentifier;
@property (nonatomic, readonly, copy) NSArray *serializedActionSets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;

- (void).cxx_destruct;
- (id)actionSets;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)homeIdentifier;
- (id)initWithActionSets:(id)arg1 home:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedActionSets;
- (id)serializedRepresentation;
- (id)triggerActionSetsBuilder;

@end
