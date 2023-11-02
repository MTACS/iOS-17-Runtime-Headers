
@interface ICHandoffController : NSObject <ICPeerInputStreamDelegate, ICPeerMessageControllerDelegate> {
    ICPeerInputStream * _inputStream;
    ICPeerOutputStream * _outputStream;
    ICPeerMessageController * _peerController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) ICPeerInputStream *inputStream;
@property (retain) ICPeerOutputStream *outputStream;
@property (retain) ICPeerMessageController *peerController;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)didDisconnectInputStream:(id)arg1;
- (void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2;
- (void)handleMessage:(id)arg1 fromInputStream:(id)arg2;
- (id)init;
- (id)inputStream;
- (id)outputStream;
- (id)peerController;
- (void)requestNoteWithIdentifier:(id)arg1;
- (bool)sendMessage:(id)arg1 toSource:(id)arg2 error:(id*)arg3;
- (void)setInputStream:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setPeerController:(id)arg1;

@end
