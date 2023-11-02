
@interface RECoreBehaviorPredictor : REPredictor <REPredictorObserver> {
    unsigned long long  _dayValue;
    unsigned long long  _hourValue;
    NSMapTable * _locations;
    BMBehaviorRetriever * _retriever;
    NSArray * _rules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)supportedFeatures;
+ (double)updateInterval;

- (void).cxx_destruct;
- (id)_bmtypeForShortcutType:(unsigned long long)arg1 filterLevel:(unsigned long long)arg2;
- (id)_init;
- (id)_retrieveFeatureValueForItemType:(id)arg1 shortcutIdentifier:(id)arg2 antecedentType:(id)arg3 antecedentValue:(id)arg4;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)pause;
- (void)predictorDidUpdate:(id)arg1;
- (void)resume;
- (void)update;

@end
