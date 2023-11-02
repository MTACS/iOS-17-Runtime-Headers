
@interface ICAccountData : ICCloudSyncingObject <ICCloudObject>

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, copy) NSData *cryptoPassphraseVerifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInICloudAccount;
@property (nonatomic, readonly) bool isValidObject;
@property (nonatomic) short lockedNotesMode;
@property (nonatomic, readonly, copy) NSString *loggingDescription;
@property (nonatomic, readonly, copy) ICTTMergeableWallClockValue *mergeableCryptoPassphraseVerifier;
@property (nonatomic, retain) NSData *mergeableData;
@property (nonatomic, readonly) bool needsToBeDeletedFromCloud;
@property (nonatomic, readonly) bool needsToBeFetchedFromCloud;
@property (nonatomic, readonly) bool needsToBePushedToCloud;
@property (nonatomic, readonly) bool needsToSaveUserSpecificRecord;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsV1Neo;
@property (nonatomic, readonly, copy) CKRecordID *userSpecificRecordID;
@property (nonatomic, readonly, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, readonly) bool wantsUserSpecificRecord;

+ (id)accountDataWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newAccountDataForAccount:(id)arg1;
+ (id)newAccountDataWithIdentifier:(id)arg1 account:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;

- (id)cloudAccount;
- (id)cryptoPassphraseVerifier;
- (bool)isDeletable;
- (bool)isInICloudAccount;
- (id)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(id)arg2;
- (bool)mergeCloudKitRecord:(id)arg1 accountID:(id)arg2 approach:(long long)arg3 mergeableFieldState:(id)arg4;
- (bool)mergeWithMergeableData:(id)arg1;
- (id)mergeableCryptoPassphraseVerifier;
- (bool)needsToBeDeletedFromCloud;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (void)saveMergeableDataIfNeeded;
- (void)setCryptoPassphraseVerifier:(id)arg1;
- (void)updateChangeCountWithReason:(id)arg1;
- (void)updateSupportsV1Neo:(id /* block */)arg1;
- (void)updateSupportsV1NeoWithAccountDevices:(id)arg1;

@end
