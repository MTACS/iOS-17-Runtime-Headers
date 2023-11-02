
@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAddingGameCenterFriends;
    NSNumber * _payloadAllowGameCenter;
    NSNumber * _payloadAllowGameCenterFriendsSharingModification;
    NSNumber * _payloadAllowGameCenterNearbyMultiplayer;
    NSNumber * _payloadAllowGameCenterPrivateMessaging;
    NSNumber * _payloadAllowGameCenterProfileModification;
    NSNumber * _payloadAllowGameCenterProfilePrivacyModification;
    NSNumber * _payloadAllowMultiplayerGaming;
    NSNumber * _payloadAllowedGameCenterOtherPlayerTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAddingGameCenterFriends;
@property (nonatomic, copy) NSNumber *payloadAllowGameCenter;
@property (nonatomic, copy) NSNumber *payloadAllowGameCenterFriendsSharingModification;
@property (nonatomic, copy) NSNumber *payloadAllowGameCenterNearbyMultiplayer;
@property (nonatomic, copy) NSNumber *payloadAllowGameCenterPrivateMessaging;
@property (nonatomic, copy) NSNumber *payloadAllowGameCenterProfileModification;
@property (nonatomic, copy) NSNumber *payloadAllowGameCenterProfilePrivacyModification;
@property (nonatomic, copy) NSNumber *payloadAllowMultiplayerGaming;
@property (nonatomic, copy) NSNumber *payloadAllowedGameCenterOtherPlayerTypes;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4 withAllowGameCenterNearbyMultiplayer:(id)arg5 withAllowGameCenterPrivateMessaging:(id)arg6 withAllowGameCenterProfilePrivacyModification:(id)arg7 withAllowGameCenterProfileModification:(id)arg8 withAllowedGameCenterOtherPlayerTypes:(id)arg9;
+ (id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4 withAllowGameCenterNearbyMultiplayer:(id)arg5 withAllowGameCenterPrivateMessaging:(id)arg6 withAllowGameCenterProfilePrivacyModification:(id)arg7 withAllowGameCenterProfileModification:(id)arg8 withAllowedGameCenterOtherPlayerTypes:(id)arg9 withAllowGameCenterFriendsSharingModification:(id)arg10;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowAddingGameCenterFriends;
- (id)payloadAllowGameCenter;
- (id)payloadAllowGameCenterFriendsSharingModification;
- (id)payloadAllowGameCenterNearbyMultiplayer;
- (id)payloadAllowGameCenterPrivateMessaging;
- (id)payloadAllowGameCenterProfileModification;
- (id)payloadAllowGameCenterProfilePrivacyModification;
- (id)payloadAllowMultiplayerGaming;
- (id)payloadAllowedGameCenterOtherPlayerTypes;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAddingGameCenterFriends:(id)arg1;
- (void)setPayloadAllowGameCenter:(id)arg1;
- (void)setPayloadAllowGameCenterFriendsSharingModification:(id)arg1;
- (void)setPayloadAllowGameCenterNearbyMultiplayer:(id)arg1;
- (void)setPayloadAllowGameCenterPrivateMessaging:(id)arg1;
- (void)setPayloadAllowGameCenterProfileModification:(id)arg1;
- (void)setPayloadAllowGameCenterProfilePrivacyModification:(id)arg1;
- (void)setPayloadAllowMultiplayerGaming:(id)arg1;
- (void)setPayloadAllowedGameCenterOtherPlayerTypes:(id)arg1;

@end
