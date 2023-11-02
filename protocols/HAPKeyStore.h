
@protocol HAPKeyStore <NSObject>

@required

- (NSString *)activeControllerPairingIdentifier;
- (bool)deserializeKeyPair:(NSData *)arg1 publicKey:(id*)arg2 secretKey:(id*)arg3 error:(id*)arg4;
- (bool)establishRelationshipBetweenAccessoryAndControllerKey:(HAPPairingIdentity *)arg1 error:(id*)arg2;
- (bool)getAllAvailableControllerPublicKeys:(id*)arg1 secretKeys:(id*)arg2 userNames:(id*)arg3 error:(id*)arg4;
- (bool)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(bool)arg5 error:(id*)arg6;
- (bool)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4 allowCreation:(bool)arg5 forAccessory:(NSString *)arg6 error:(id*)arg7;
- (bool)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(bool)arg4 error:(id*)arg5;
- (bool)getControllerPublicKey:(id*)arg1 secretKey:(id*)arg2 username:(id*)arg3 allowCreation:(bool)arg4 forAccessory:(NSString *)arg5 error:(id*)arg6;
- (bool)getCurrentiCloudIdentifier:(id*)arg1 controllerPairingIdentifier:(id*)arg2 error:(id*)arg3;
- (HAPPairingIdentity *)getLocalPairingIdentity:(id*)arg1;
- (HAPPairingIdentity *)getOrCreateLocalPairingIdentity:(id*)arg1;
- (bool)isAccessoryAssociatedWithControllerKey:(NSString *)arg1 controllerID:(id*)arg2;
- (HAPPairingIdentity *)readControllerPairingKeyForAccessory:(NSString *)arg1 error:(id*)arg2;
- (NSData *)readPublicKeyForAccessoryName:(NSString *)arg1 registeredWithHomeKit:(bool*)arg2 error:(id*)arg3;
- (bool)registerAccessoryWithHomeKit:(NSString *)arg1 error:(id*)arg2;
- (bool)removeAccessoryKeyForName:(NSString *)arg1 error:(id*)arg2;
- (bool)removeAllAccessoryKeys:(id*)arg1;
- (bool)removeControllerKeyPairForIdentifier:(NSString *)arg1 leaveTombstone:(bool)arg2 error:(id*)arg3;
- (bool)removeControllerKeyPairLeaveTombstone:(bool)arg1 error:(id*)arg2;
- (bool)removeControllerKeyPairWithError:(id*)arg1;
- (bool)saveKeyPair:(NSData *)arg1 username:(NSString *)arg2 syncable:(bool)arg3 error:(id*)arg4;
- (bool)saveLocalPairingIdentity:(HAPPairingIdentity *)arg1 syncable:(bool)arg2 error:(id*)arg3;
- (bool)savePublicKey:(NSData *)arg1 forAccessoryName:(NSString *)arg2 error:(id*)arg3;
- (bool)updateActiveControllerPairingIdentifier:(NSString *)arg1;
- (bool)updateCurrentiCloudIdentifier:(NSString *)arg1 controllerPairingIdentifier:(NSString *)arg2 error:(id*)arg3;

@optional

- (NSArray *)allAccessoryPairingKeys;
- (NSArray *)allHH2PairingKeys;
- (NSArray *)allKeysForType:(NSNumber *)arg1 error:(id*)arg2;
- (NSArray *)allLegacyAccessoryPairingKeys;
- (bool)createAccessoryPairingKey:(HAPPairingIdentity *)arg1 error:(id*)arg2;
- (int)createHH2ControllerKey:(id*)arg1 secretKey:(id*)arg2 keyPair:(id*)arg3 username:(id*)arg4;
- (bool)deleteAllPeripheralIdentifiers:(id*)arg1;
- (bool)deletePairingKeysForAccessory:(NSString *)arg1 error:(id*)arg2;
- (bool)deletePeripheralIdentifierForAccessoryIdentifier:(NSString *)arg1 error:(id*)arg2;
- (HAPPairingIdentity *)getAssociatedControllerKeyForAccessory:(NSString *)arg1;
- (HAPPairingIdentity *)getHH2ControllerKeyWithIdentifier:(NSString *)arg1;
- (NSDictionary *)getPeripherialIdentifiersAndAccessoryNames;
- (HAPPairingIdentity *)getPreferredHH2ControllerKey;
- (bool)isHH2KeyType:(NSString *)arg1;
- (HMFPairingIdentity *)pairingIdentityForAppleMediaAccessorySensorWithUUID:(NSUUID *)arg1;
- (HMFPairingIdentity *)pairingIdentityForAppleMediaAccessoryWithUUID:(NSUUID *)arg1;
- (HAPPairingIdentity *)readAccessoryPairingKeyForAccessory:(NSString *)arg1 error:(id*)arg2;
- (NSUUID *)readPeripheralIdentifierForAccessoryIdentifier:(NSString *)arg1 protocolVersion:(unsigned long long*)arg2 resumeSessionID:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)saveAppleMediaAccessoryPairingIdentity:(HMFPairingIdentity *)arg1;
- (bool)saveAppleMediaAccessorySensorPairingIdentity:(HMFPairingIdentity *)arg1;
- (bool)saveHH2PairingIdentity:(HAPPairingIdentity *)arg1 syncable:(bool)arg2;
- (bool)savePairingIdentityToBackUpTable:(HAPPairingIdentity *)arg1;
- (bool)savePeripheralIdentifier:(NSUUID *)arg1 forAccessoryIdentifier:(NSString *)arg2 error:(id*)arg3;
- (bool)updateAccessoryPairingKey:(HAPPairingIdentity *)arg1 error:(id*)arg2;
- (bool)updatePeripheralIdentifier:(NSUUID *)arg1 forAccessoryIdentifier:(NSString *)arg2 protocolVersion:(unsigned long long)arg3 previousVersion:(unsigned long long*)arg4 resumeSessionID:(unsigned long long)arg5 error:(id*)arg6;

@end
