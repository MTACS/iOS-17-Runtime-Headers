
@protocol ICAccountCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>

@required

- (bool)hasSamePassphraseForObject:(ICCloudSyncingObject *)arg1;
- (void)removePassphrase;
- (bool)setPassphrase:(NSString *)arg1 hint:(NSString *)arg2;

@end
