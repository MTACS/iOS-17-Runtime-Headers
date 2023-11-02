
@interface SANPSetRepeatMode : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSString *repeatMode;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)setRepeatMode;
+ (id)setRepeatModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (id)repeatMode;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setRepeatMode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
