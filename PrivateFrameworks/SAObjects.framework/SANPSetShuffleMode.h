
@interface SANPSetShuffleMode : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSString *shuffleMode;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)setShuffleMode;
+ (id)setShuffleModeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setShuffleMode:(id)arg1;
- (id)shuffleMode;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
