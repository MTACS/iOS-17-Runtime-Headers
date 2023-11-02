
@protocol SBSystemApertureDynamicsHandling <NSObject>

@required

- (void)element:(id <SAElement>)arg1 requestsDiscreteAnimationOfType:(long long)arg2;
- (<SAInvalidatable> *)element:(id <SAElement>)arg1 requestsPersistentAnimationOfType:(long long)arg2;

@end
