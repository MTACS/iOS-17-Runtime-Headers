
@interface RETimePredictor : REPredictor

+ (id)supportedFeatures;
+ (double)updateInterval;

- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)update;

@end
