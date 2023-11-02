
@interface WBSPasswordBreachQueuedPassword : NSObject {
    NSMutableArray * _bucketIdentifierAndHashStack;
    NSData * _highFrequencyEncodedPassword;
    NSArray * _persistentIdentifiers;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSData *highFrequencyEncodedPasswordData;
@property (nonatomic, readonly) NSArray *persistentIdentifiers;
@property (nonatomic, readonly) unsigned long long remainingHashCount;
@property (nonatomic, readonly) WBSPair *topBucketIdentiferAndHash;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)highFrequencyEncodedPasswordData;
- (id)initFakePasswordWithContext:(id)arg1;
- (id)initWithCredentials:(id)arg1 context:(id)arg2;
- (id)persistentIdentifiers;
- (void)pushBucketIdentifiersAndHashesFromQueuedPassword:(id)arg1;
- (unsigned long long)remainingHashCount;
- (void)removeTopBucketIdentifierAndHash;
- (id)topBucketIdentiferAndHash;
- (id)uuid;

@end
