
@interface SANPSetPlaybackSpeed : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) double scalingFactor;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)setPlaybackSpeed;
+ (id)setPlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (double)scalingFactor;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setScalingFactor:(double)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
