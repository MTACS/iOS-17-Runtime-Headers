
@interface SGDuplicateKey : NSObject <NSCopying> {
    NSObject<SGEntityKey> * _entityKey;
    long long  _entityType;
    SGDuplicateKey * _parentKey;
}

@property (nonatomic, readonly) NSData *compositeHash;
@property (nonatomic, readonly) NSObject<SGEntityKey> *entityKey;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) SGDuplicateKey *parentKey;

+ (id)duplicateKeyForCuratedEventWithExternalID:(id)arg1;
+ (id)duplicateKeyForDeliveryWithProviderString:(id)arg1 trackingNumber:(id)arg2 parentKey:(id)arg3;
+ (id)duplicateKeyForEmailWithSource:(id)arg1 messageId:(id)arg2;
+ (id)duplicateKeyForInteraction:(id)arg1 fromBundleIdentifier:(id)arg2;
+ (id)duplicateKeyForInteractionIdentifier:(id)arg1 fromBundleIdentifier:(id)arg2;
+ (id)duplicateKeyForInteractionWithBundleId:(id)arg1 personHandle:(id)arg2;
+ (id)duplicateKeyForMessage:(id)arg1 fromSource:(id)arg2;
+ (id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 participants:(id)arg4 parentKey:(id)arg5;
+ (id)duplicateKeyForPseudoContactWithIdentity:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForPseudoEventWithGroupId:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForPseudoReminderWithGroupId:(id)arg1 withCreationTime:(struct SGUnixTimestamp_ { double x1; })arg2 parentKey:(id)arg3;
+ (id)duplicateKeyForSchemaOrg;
+ (id)duplicateKeyForSearchableItem:(id)arg1;
+ (id)duplicateKeyForTextMessageWithSource:(id)arg1 uniqueIdentifier:(id)arg2;
+ (id)duplicateKeyForWalletOrderIdentifier:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForWalletPassIdentifier:(id)arg1 parentKey:(id)arg2;
+ (id)duplicateKeyForWebPageFromSource:(id)arg1;
+ (bool)serializationPassesBasicScrutiny:(id)arg1;

- (void).cxx_destruct;
- (id)bundleId;
- (id)compositeHash;
- (id)contactDetailKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedEventKey;
- (id)deliveryKey;
- (id)description;
- (id)emailKey;
- (id)entityKey;
- (long long)entityType;
- (unsigned long long)hash;
- (id)identityKey;
- (id)initWithEntityKey:(id)arg1 entityType:(long long)arg2 parentKey:(id)arg3;
- (id)initWithMessageIdHeaderValues:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithSearchableItem:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (id)initWithSerializedEntityKey:(id)arg1 entityType:(long long)arg2 serializedParentKey:(id)arg3;
- (id)interactionKey;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDuplicateKey:(id)arg1;
- (id)messageKey;
- (id)parentKey;
- (id)pseudoContactKey;
- (id)pseudoEventKey;
- (id)pseudoReminderKey;
- (id)serialize;
- (id)textMessageKey;
- (id)walletOrderKey;
- (id)walletPassKey;
- (id)webPageKey;

@end
