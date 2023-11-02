
@interface CKTranscriptAvatarSupplementaryView : CKTranscriptCollectionSupplementaryView {
    CKAvatarView * _avatarView;
}

@property (nonatomic, retain) CKAvatarView *avatarView;

+ (id)supplementaryViewKindPrefix;

- (void).cxx_destruct;
- (id)avatarView;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAvatarView:(id)arg1;

@end
