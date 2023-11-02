
@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {
    NSString * _folderID;
    NSString * _messageIDHeader;
}

@property (nonatomic, readonly) bool isUserRequested;
@property (nonatomic, readonly) bool shouldSend;

- (void).cxx_destruct;
- (unsigned long long)generationNumber;
- (id)initWithMessage:(id)arg1 mailbox:(id)arg2;
- (bool)isUserRequested;
- (bool)shouldSend;

@end
