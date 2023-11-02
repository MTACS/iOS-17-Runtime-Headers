
@interface SAMPLoadQP : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSNumber *startPlaying;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)loadQP;
+ (id)loadQPWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setStartPlaying:(id)arg1;
- (id)startPlaying;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
