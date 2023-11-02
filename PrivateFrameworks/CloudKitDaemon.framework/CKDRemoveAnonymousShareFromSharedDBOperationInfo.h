
@interface CKDRemoveAnonymousShareFromSharedDBOperationInfo : CKDatabaseOperationInfo {
    id /* block */  _anonymousShareRemovedBlock;
    NSDictionary * _encryptedAnonymousSharesToRemove;
}

@property (nonatomic, copy) id /* block */ anonymousShareRemovedBlock;
@property (nonatomic, retain) NSDictionary *encryptedAnonymousSharesToRemove;

- (void).cxx_destruct;
- (id /* block */)anonymousShareRemovedBlock;
- (id)encryptedAnonymousSharesToRemove;
- (void)setAnonymousShareRemovedBlock:(id /* block */)arg1;
- (void)setEncryptedAnonymousSharesToRemove:(id)arg1;

@end
