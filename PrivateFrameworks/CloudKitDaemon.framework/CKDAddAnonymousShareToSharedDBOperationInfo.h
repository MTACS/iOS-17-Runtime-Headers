
@interface CKDAddAnonymousShareToSharedDBOperationInfo : CKDatabaseOperationInfo {
    id /* block */  _anonymousShareSavedBlock;
    NSDictionary * _encryptedAnonymousSharesToAdd;
}

@property (nonatomic, copy) id /* block */ anonymousShareSavedBlock;
@property (nonatomic, retain) NSDictionary *encryptedAnonymousSharesToAdd;

- (void).cxx_destruct;
- (id /* block */)anonymousShareSavedBlock;
- (id)encryptedAnonymousSharesToAdd;
- (void)setAnonymousShareSavedBlock:(id /* block */)arg1;
- (void)setEncryptedAnonymousSharesToAdd:(id)arg1;

@end
