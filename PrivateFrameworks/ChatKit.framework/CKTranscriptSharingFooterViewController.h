
@interface CKTranscriptSharingFooterViewController : UIViewController <UITextViewDelegate> {
    CKChatController * _chatController;
}

@property (nonatomic, readonly) CKChatController *chatController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chatController;
- (id)initWithChatController:(id)arg1;
- (void)loadView;

@end
