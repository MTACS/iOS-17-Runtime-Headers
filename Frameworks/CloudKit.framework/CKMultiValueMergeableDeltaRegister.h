
@interface CKMultiValueMergeableDeltaRegister : CKMultiValueRegister <CKVersionedMergeable> {
    NSData * _salt;
}

@property (nonatomic, copy) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKMultiValueMergeableDeltaRegisterState *persistedState;
@property (nonatomic, readonly) NSData *salt;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *timestampToContents;

+ (id)installationIdentifierWithSalt:(id)arg1;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (bool)checkElementType:(id)arg1 error:(id*)arg2;
- (unsigned long long)deltaDeliveryRequirements;
- (id)initWithIdentifier:(id)arg1 vector:(id)arg2 contents:(id)arg3 error:(id*)arg4;
- (id)initWithPersistedState:(id)arg1 contents:(id)arg2 error:(id*)arg3;
- (id)installationIdentifier;
- (bool)mergeDeltas:(id)arg1 error:(id*)arg2;
- (id)mergeableDeltasForMetadata:(id)arg1 error:(id*)arg2;
- (unsigned long long)modifierLimitForInstallationIdentifierCheck;
- (id)persistedState;
- (id)salt;
- (void)setContents:(id)arg1;
- (id)siteIdentifier;
- (id)stateVector;

@end
