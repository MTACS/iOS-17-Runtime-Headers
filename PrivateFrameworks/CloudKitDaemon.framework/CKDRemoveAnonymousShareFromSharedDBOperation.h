
@interface CKDRemoveAnonymousShareFromSharedDBOperation : CKDDatabaseOperation {
    id /* block */  _anonymousShareRemovedBlock;
    NSDictionary * _encryptedAnonymousSharesToRemove;
}

@property (nonatomic, copy) id /* block */ anonymousShareRemovedBlock;
@property (nonatomic, retain) NSDictionary *encryptedAnonymousSharesToRemove;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_removeAnonymousShareFromSharedDB;
- (id)activityCreate;
- (id /* block */)anonymousShareRemovedBlock;
- (id)encryptedAnonymousSharesToRemove;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (void)setAnonymousShareRemovedBlock:(id /* block */)arg1;
- (void)setEncryptedAnonymousSharesToRemove:(id)arg1;

@end
