
@interface CKDAnonymousShareAddURLRequest : CKDURLRequest {
    id /* block */  _anonymousShareSavedBlock;
    NSMutableDictionary * _encryptedAnonymousShareHashToAddByRequestID;
    NSDictionary * _encryptedAnonymousSharesToAdd;
}

@property (nonatomic, copy) id /* block */ anonymousShareSavedBlock;
@property (nonatomic, retain) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID;
@property (nonatomic, retain) NSDictionary *encryptedAnonymousSharesToAdd;

- (void).cxx_destruct;
- (id /* block */)anonymousShareSavedBlock;
- (id)encryptedAnonymousShareHashToAddByRequestID;
- (id)encryptedAnonymousSharesToAdd;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 encryptedAnonymousSharesToAdd:(id)arg2;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresCKAnonymousUserIDs;
- (void)setAnonymousShareSavedBlock:(id /* block */)arg1;
- (void)setEncryptedAnonymousShareHashToAddByRequestID:(id)arg1;
- (void)setEncryptedAnonymousSharesToAdd:(id)arg1;

@end
