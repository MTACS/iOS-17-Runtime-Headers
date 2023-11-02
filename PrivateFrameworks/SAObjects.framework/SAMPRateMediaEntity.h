
@interface SAMPRateMediaEntity : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *hashedRouteUID;
@property (nonatomic) long long rating;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)rateMediaEntity;
+ (id)rateMediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUID;
- (long long)rating;
- (bool)requiresResponse;
- (void)setHashedRouteUID:(id)arg1;
- (void)setRating:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
