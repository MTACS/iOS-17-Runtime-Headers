
@interface DAKeySharingInvitationData : NSObject <NSSecureCoding> {
    NSString * _friendKeyIdentifier;
    NSString * _invitationIdentifier;
    long long  _invitationState;
    NSString * _passwordPiece;
    NSUUID * _sharingSessionIdentifier;
    long long  _sharingTargetType;
    NSString * _vehicleEnteredPasscode;
}

@property (nonatomic, readonly) NSString *friendKeyIdentifier;
@property (nonatomic, readonly) NSString *invitationIdentifier;
@property (nonatomic, readonly) long long invitationState;
@property (nonatomic, readonly) NSString *passwordPiece;
@property (nonatomic, readonly) NSUUID *sharingSessionIdentifier;
@property (nonatomic, readonly) long long sharingTargetType;
@property (nonatomic, readonly) NSString *vehicleEnteredPasscode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)friendKeyIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 invitationIdentifier:(id)arg2 friendKeyIdentifier:(id)arg3 sharingTarget:(long long)arg4 state:(long long)arg5 vehicleEnteredPasscode:(id)arg6;
- (id)invitationIdentifier;
- (long long)invitationState;
- (id)passwordPiece;
- (id)sharingSessionIdentifier;
- (long long)sharingTargetType;
- (id)vehicleEnteredPasscode;

@end
