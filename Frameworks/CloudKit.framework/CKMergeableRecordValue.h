
@interface CKMergeableRecordValue : NSObject <CKPropertiesDescription, CKRecordValue, NSSecureCoding> {
    NSSet * _deltasToSave;
    unsigned long long  _enabledFaultErrors;
    long long  _encryptMetadataTernary;
    bool  _inlineReplacementEnabled;
    bool  _isValueIDKnownToServer;
    CKDistributedTimestampStateVector * _lastKnownServerTimestampVector;
    CKMultiValueMergeableDeltaRegisterState * _multiValueRegisterState;
    NSArray * _pendingReplacementRequests;
    NSSet * _savedDeltaMetadatas;
    NSSet * _serverDeltaMetadatas;
    NSSet * _unmergedDeltas;
    CKMergeableValueID * _valueID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSSet *deltasToSave;
@property (readonly, copy) NSString *description;
@property unsigned long long enabledFaultErrors;
@property (nonatomic) bool encryptMetadata;
@property (nonatomic) long long encryptMetadataTernary;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inlineReplacementEnabled;
@property (nonatomic) bool isValueIDKnownToServer;
@property (nonatomic, copy) CKDistributedTimestampStateVector *lastKnownServerTimestampVector;
@property (nonatomic, readonly) CKMultiValueMergeableDeltaRegister *multiValueRegister;
@property (nonatomic, retain) CKMultiValueMergeableDeltaRegisterState *multiValueRegisterState;
@property (nonatomic, copy) NSArray *pendingReplacementRequests;
@property (nonatomic, copy) NSSet *savedDeltaMetadatas;
@property (nonatomic, copy) NSSet *serverDeltaMetadatas;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *unmergedDeltas;
@property (nonatomic, copy) CKMergeableValueID *valueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (bool)addDeltasToSaveFromMergeable:(id)arg1 container:(id)arg2 error:(id*)arg3;
- (bool)addDeltasToSaveFromMergeable:(id)arg1 error:(id*)arg2;
- (void)addServerDeltaMetadatas:(id)arg1;
- (void)addUnmergedDeltas:(id)arg1;
- (id)deliverableDeltasWithCurrentStateVector:(id)arg1 usingDeliveryRequirements:(unsigned long long)arg2;
- (id)deltasToSave;
- (id)description;
- (void)didMergeDeltas:(id)arg1;
- (void)didSaveDeltas:(id)arg1 replacementRequests:(id)arg2;
- (unsigned long long)enabledFaultErrors;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptMetadata;
- (long long)encryptMetadataTernary;
- (bool)hasAssetBackedDeltas;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValueID:(id)arg1;
- (bool)inlineReplacementEnabled;
- (bool)isValueIDKnownToServer;
- (id)lastKnownServerTimestampVector;
- (bool)mergeIntoMergeable:(id)arg1 error:(id*)arg2;
- (void)mergeLastKnownServerTimestampVector:(id)arg1;
- (void)mergeLastKnownServerTimestampVectorFromDeltas:(id)arg1;
- (bool)mergeRecordValue:(id)arg1 error:(id*)arg2;
- (id)multiValueRegister;
- (id)multiValueRegisterState;
- (id)pendingReplacementRequests;
- (id)redactedDescription;
- (void)sanityCheckDeltas:(id)arg1;
- (id)savedDeltaMetadatas;
- (id)serverDeltaMetadatas;
- (void)setDeltasToSave:(id)arg1;
- (void)setEnabledFaultErrors:(unsigned long long)arg1;
- (void)setEncryptMetadata:(bool)arg1;
- (void)setEncryptMetadataTernary:(long long)arg1;
- (void)setInlineReplacementEnabled:(bool)arg1;
- (void)setIsValueIDKnownToServer:(bool)arg1;
- (void)setLastKnownServerTimestampVector:(id)arg1;
- (void)setMultiValueRegisterState:(id)arg1;
- (void)setPendingReplacementRequests:(id)arg1;
- (void)setSavedDeltaMetadatas:(id)arg1;
- (void)setServerDeltaMetadatas:(id)arg1;
- (void)setUnmergedDeltas:(id)arg1;
- (void)setValueID:(id)arg1;
- (id)unmergedDeltas;
- (id)valueID;

@end
