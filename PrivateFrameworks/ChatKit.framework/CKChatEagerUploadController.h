
@interface CKChatEagerUploadController : NSObject {
    NSMutableDictionary * _identifierMap;
    NSMutableDictionary * _temporaryURLS;
    NSMutableArray * _uploadUrls;
}

@property (nonatomic, retain) NSMutableDictionary *identifierMap;
@property (nonatomic, retain) NSMutableDictionary *temporaryURLS;
@property (nonatomic, retain) NSMutableArray *uploadUrls;

- (void).cxx_destruct;
- (id)_newTransferForURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3;
- (void)_uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 recipients:(id)arg7;
- (void)addURLToIdentifierMap:(id)arg1 forIdentifier:(id)arg2;
- (void)asyncCopyFileAtURL:(id)arg1 toDestinationURL:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelAll;
- (void)cancelIdentifier:(id)arg1;
- (void)cancelURL:(id)arg1;
- (void)didSendComposition;
- (id)identifierMap;
- (id)init;
- (void)removeTemporaryURLForURL:(id)arg1;
- (void)setIdentifierMap:(id)arg1;
- (void)setTemporaryURLS:(id)arg1;
- (void)setUploadUrls:(id)arg1;
- (id)temporaryURLS;
- (void)uploadFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 videoComplementURL:(id)arg4 attributionInfo:(id)arg5 identifier:(id)arg6 recipients:(id)arg7;
- (void)uploadPayload:(id)arg1 identifier:(id)arg2 replace:(bool)arg3 recipients:(id)arg4;
- (id)uploadUrls;

@end
