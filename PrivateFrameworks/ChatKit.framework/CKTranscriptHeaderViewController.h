
@interface CKTranscriptHeaderViewController : UIViewController {
    CKConversation * _conversation;
    bool  _shouldInvalidateOnAddressBookChange;
}

@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, readonly) bool shouldInvalidateOnAddressBookChange;

- (void).cxx_destruct;
- (id)conversation;
- (id)initWithConversation:(id)arg1;
- (void)setConversation:(id)arg1;
- (bool)shouldInvalidateOnAddressBookChange;

@end
