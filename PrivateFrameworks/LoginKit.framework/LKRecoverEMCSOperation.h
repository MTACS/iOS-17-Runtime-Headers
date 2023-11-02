
@interface LKRecoverEMCSOperation : LKOperation {
    long long  _recoveredKeychainItemCount;
}

@property (nonatomic, readonly) long long recoveredKeychainItemCount;

- (id)dictionary;
- (id)init;
- (long long)recoveredKeychainItemCount;
- (void)setRecoveredKeychainItemCount:(long long)arg1;

@end
