
@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, retain) NSNumber *invitationState;
@property (nonatomic, retain) NSString *inviteeDestinationAddress;
@property (nonatomic, retain) NSString *messageIdentifier;
@property (nonatomic, retain) NSArray *operationIdentifiers;
@property (nonatomic, retain) NSArray *operations;
@property (nonatomic, retain) NSNumber *responseReceived;
@property (nonatomic, retain) NSDictionary *user;

+ (id)properties;

- (id)dependentUUIDs;

@end
