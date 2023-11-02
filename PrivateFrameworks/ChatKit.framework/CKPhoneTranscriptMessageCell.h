
@interface CKPhoneTranscriptMessageCell : CKTranscriptMessageCell {
    CKAvatarView * _avatarView;
    UIImageView * _printableAvatarView;
}

@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) UIImageView *printableAvatarView;

- (void).cxx_destruct;
- (id)avatarView;
- (id)contactImageView;
- (void)dealloc;
- (void)layoutSubviewsForContents;
- (id)printableAvatarView;
- (void)setAvatarView:(id)arg1;
- (void)setPrintableAvatarView:(id)arg1;
- (void)setShowAvatarView:(bool)arg1 withContact:(id)arg2 preferredHandle:(id)arg3 avatarViewDelegate:(id)arg4;

@end
