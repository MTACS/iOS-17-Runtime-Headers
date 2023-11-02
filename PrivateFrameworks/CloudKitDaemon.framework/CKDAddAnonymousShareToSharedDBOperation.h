
@interface CKDAddAnonymousShareToSharedDBOperation : CKDDatabaseOperation {
    id /* block */  _anonymousShareSavedBlock;
    NSDictionary * _encryptedAnonymousSharesToAdd;
}

@property (nonatomic, copy) id /* block */ anonymousShareSavedBlock;
@property (nonatomic, retain) NSDictionary *encryptedAnonymousSharesToAdd;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_addAnonymousSharesToSharedDB;
- (id)activityCreate;
- (id /* block */)anonymousShareSavedBlock;
- (id)encryptedAnonymousSharesToAdd;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (int)operationType;
- (void)setAnonymousShareSavedBlock:(id /* block */)arg1;
- (void)setEncryptedAnonymousSharesToAdd:(id)arg1;

@end
