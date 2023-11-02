
@interface ICNAIdentityManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDate * _currentDateForTesting;
    NSUbiquitousKeyValueStore * _encryptedKVStore;
    bool  _identifierResetOccurred;
    NSString * _identityTimestampYYYYMM;
    NSString * _privateUserID;
    NSDictionary * _salts;
    unsigned long long  _startMonth;
    unsigned long long  _startYear;
    NSString * _userID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, copy) NSDate *currentDateForTesting;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *encryptedKVStore;
@property (nonatomic) bool identifierResetOccurred;
@property (nonatomic, copy) NSString *identityTimestampYYYYMM;
@property (nonatomic, copy) NSString *privateUserID;
@property (nonatomic, copy) NSDictionary *salts;
@property (nonatomic) unsigned long long startMonth;
@property (nonatomic) unsigned long long startYear;
@property (nonatomic, copy) NSString *userID;

+ (id)newSalt;
+ (id)saltedID:(id)arg1 withSalt:(id)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_keyValueStoreDidChangeExternally:(id)arg1;
- (id)accessQueue;
- (id)currentDateForTesting;
- (void)debug_clearIdentifiers;
- (void)debug_dumpIdentifiers;
- (void)debug_forceRegenerateIdentifiers;
- (id)encryptedKVStore;
- (bool)identifierResetOccurred;
- (id)identityTimestampYYYYMM;
- (id)init;
- (void)loadIdentifiersAndRegenerateIfNecessary;
- (void)loadIdentifiersFromKVSAndForceRegenerateIdentity:(bool)arg1;
- (id)privateUserID;
- (id)saltedID:(id)arg1 forClass:(Class)arg2;
- (id)salts;
- (void)setAccessQueue:(id)arg1;
- (void)setCurrentDateForTesting:(id)arg1;
- (void)setEncryptedKVStore:(id)arg1;
- (void)setIdentifierResetOccurred:(bool)arg1;
- (void)setIdentityTimestampYYYYMM:(id)arg1;
- (void)setPrivateUserID:(id)arg1;
- (void)setSalts:(id)arg1;
- (void)setStartMonth:(unsigned long long)arg1;
- (void)setStartYear:(unsigned long long)arg1;
- (void)setUserID:(id)arg1;
- (unsigned long long)startMonth;
- (unsigned long long)startYear;
- (id)todayTimestampYYYYMM:(id)arg1;
- (id)userID;

@end
