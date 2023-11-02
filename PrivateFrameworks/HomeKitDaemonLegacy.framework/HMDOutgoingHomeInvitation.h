
@interface HMDOutgoingHomeInvitation : HMDHomeInvitation <HMDBackingStoreObjectProtocol> {
    NSString * _inviteeDestinationAddress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _messageIdentifier;
    NSArray * _operationIdentifiers;
    HMDUser * _user;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSArray *accessoryInvitationsInformation;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inviteeDestinationAddress;
@property (nonatomic, readonly) NSUUID *messageIdentifier;
@property (nonatomic, retain) NSArray *operationIdentifiers;
@property (nonatomic, readonly) NSArray *operations;
@property (nonatomic, readonly) bool responseReceived;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDUser *user;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_transactionOutgoingInvitationUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)accessoryInvitationsInformation;
- (void)cancel;
- (id)debugDescription;
- (id)describeWithFormat;
- (id)description;
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5;
- (id)initWithUUID:(id)arg1 invitee:(id)arg2 invitationState:(long long)arg3 forHome:(id)arg4 expiryDate:(id)arg5 messageIdentifier:(id)arg6;
- (id)inviteeDestinationAddress;
- (bool)isComplete;
- (id)messageIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (void)notifyStateChangedForMessage:(id)arg1;
- (id)operationIdentifiers;
- (id)operations;
- (void)processUserManagementOperationIdentifiers:(id)arg1;
- (bool)refreshDisplayName;
- (bool)responseReceived;
- (void)setInviteeDestinationAddress:(id)arg1;
- (void)setOperationIdentifiers:(id)arg1;
- (void)setUser:(id)arg1;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateInvitationState:(long long)arg1;
- (void)updateUser:(id)arg1;
- (void)updateUserManagementOperations:(id)arg1;
- (id)user;
- (id)uuid;

@end
