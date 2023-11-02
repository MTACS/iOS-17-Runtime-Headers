
@interface CKMergeableDeltaMetadata : NSObject <CKEncryptable, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSSet * _replacedDeltaIdentifiers;
    CKMergeableDeltaVectors * _vectors;
}

@property (nonatomic, copy) CKTuple2 *authenticatedTimestamps;
@property (nonatomic, readonly, copy) CKDistributedTimestampStateVector *contentsVector;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) CKDistributedTimestampClockVector *dependenciesVector;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *encryptedTimestamps;
@property (nonatomic, copy) NSData *envelope;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool needsDecryption;
@property (nonatomic, readonly) bool needsEncryption;
@property (nonatomic, readonly, copy) CKDistributedTimestampClockVector *previousVector;
@property (nonatomic, readonly, copy) CKDistributedTimestampStateVector *removalsVector;
@property (copy) NSSet *replacedDeltaIdentifiers;
@property (nonatomic, readonly) unsigned long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CKMergeableDeltaVectors *vectors;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)deliverableDeltaMetadatasInDeltaSet:(id)arg1 withMergeableValueCurrentStateVector:(id)arg2 deliveryRequirements:(unsigned long long)arg3;
+ (id)mergeableDeltaMetadataByCombiningMetadatas:(id)arg1;
+ (id)replacementDeltaMetadatasForDeltaDirectory:(id)arg1 withNextDeltaMetadata:(id)arg2 currentStateVector:(id)arg3 deltaDirectoryDeliveryRequirements:(unsigned long long)arg4 error:(id*)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEquivalent:(id)arg1;
- (id)contentsVector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)dependenciesVector;
- (id)description;
- (id)descriptionWithStringSiteIdentifiers:(bool)arg1 usingSuperscripts:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 vectors:(id)arg2 replacedDeltaIdentifiers:(id)arg3;
- (id)initWithVectors:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)previousVector;
- (id)removalsVector;
- (id)replacedDeltaIdentifiers;
- (void)setReplacedDeltaIdentifiers:(id)arg1;
- (unsigned long long)size;
- (id)vectors;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (struct __OpaquePCSKeyEnvelope { }*)_decryptWithContext:(id)arg1 error:(id*)arg2;
- (struct __OpaquePCSKeyEnvelope { }*)_encryptWithContext:(id)arg1 error:(id*)arg2;
- (struct __OpaquePCSKeyEnvelope { }*)_envelopeWithContext:(id)arg1 allowCreation:(bool)arg2 error:(id*)arg3;
- (id)authenticatedTimestamps;
- (bool)decryptWithContext:(id)arg1 error:(id*)arg2;
- (id)encryptedTimestamps;
- (id)envelope;
- (bool)needsDecryption;
- (bool)needsEncryption;
- (void)setAuthenticatedTimestamps:(id)arg1;
- (void)setEncryptedTimestamps:(id)arg1;
- (void)setEnvelope:(id)arg1;

@end
