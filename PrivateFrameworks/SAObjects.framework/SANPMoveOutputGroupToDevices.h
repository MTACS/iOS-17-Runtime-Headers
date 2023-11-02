
@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)moveOutputGroupToDevices;
+ (id)moveOutputGroupToDevicesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupID;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setGroupID:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
