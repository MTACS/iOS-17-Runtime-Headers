
@interface RESiriEngagementPredictor : REPredictor <RESiriEngagementPredictorProperties, REUpNextSiriObserver> {
    NSString * _lastSiriDomain;
    REUpNextTimer * _siriDecayTimer;
    float  _siriInfluence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastSiriDomain;
@property (nonatomic, readonly) float siriInfluence;
@property (readonly) Class superclass;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_init;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)lastSiriDomain;
- (float)siriInfluence;
- (void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2;

@end
