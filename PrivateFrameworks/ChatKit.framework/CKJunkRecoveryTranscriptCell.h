
@interface CKJunkRecoveryTranscriptCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol, UITextViewDelegate> {
    <CKJunkRecoveryTranscriptCellDelegate> * _delegate;
    UIButton * _deleteConversationButton;
    UITextView * _recoverConversationTextView;
    UIButton * _recoverJunkButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKJunkRecoveryTranscriptCellDelegate> *delegate;
@property (nonatomic, retain) UIButton *deleteConversationButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextView *recoverConversationTextView;
@property (nonatomic, retain) UIButton *recoverJunkButton;
@property (readonly) Class superclass;

+ (id)_attributedRecoverConversationStringWithDeletionDate:(id)arg1;
+ (id)generateDeleteConversationButton;
+ (id)generateRecoverConversationTextView;
+ (id)generateRecoverJunkButton;
+ (double)heightForChatItem:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_configureRecoverConversationTextView:(id)arg1;
- (void)_layoutLabelInAlignmentContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)delegate;
- (id)deleteConversationButton;
- (void)deleteConversationButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)prepareForReuse;
- (id)recoverConversationTextView;
- (id)recoverJunkButton;
- (void)recoverJunkButtonPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteConversationButton:(id)arg1;
- (void)setRecoverConversationTextView:(id)arg1;
- (void)setRecoverJunkButton:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateRecoverConversationTextViewContentForDate:(id)arg1;

@end
