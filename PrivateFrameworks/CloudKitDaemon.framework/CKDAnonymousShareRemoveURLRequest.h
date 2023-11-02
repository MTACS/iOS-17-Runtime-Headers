
@interface CKDAnonymousShareRemoveURLRequest : CKDURLRequest {
    id /* block */  _anonymousShareRemovedBlock;
    NSMutableDictionary * _encryptedAnonymousShareHashToRemoveByRequestID;
    NSDictionary * _encryptedAnonymousSharesToRemove;
}

@property (nonatomic, copy) id /* block */ anonymousShareRemovedBlock;
@property (nonatomic, retain) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID;
@property (nonatomic, retain) NSDictionary *encryptedAnonymousSharesToRemove;

- (void).cxx_destruct;
- (id /* block */)anonymousShareRemovedBlock;
- (id)encryptedAnonymousShareHashToRemoveByRequestID;
- (id)encryptedAnonymousSharesToRemove;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 encryptedAnonymousSharesToRemove:(id)arg2;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresCKAnonymousUserIDs;
- (void)setAnonymousShareRemovedBlock:(id /* block */)arg1;
- (void)setEncryptedAnonymousShareHashToRemoveByRequestID:(id)arg1;
- (void)setEncryptedAnonymousSharesToRemove:(id)arg1;

@end
