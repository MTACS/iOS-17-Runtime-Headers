
@interface CKReviewLargeConversationsTableViewCell : CKAbstractReviewTableViewCell {
    CNAvatarView * _avatarView;
    IMChat * _chat;
}

@property (nonatomic, retain) CNAvatarView *avatarView;
@property (nonatomic, retain) IMChat *chat;

+ (struct CGSize { double x1; double x2; })leftHandSideViewSize;
+ (double)requestedHeight;

- (void).cxx_destruct;
- (id)avatarView;
- (id)chat;
- (id)leftHandSideView;
- (void)prepareForReuse;
- (void)setAvatarView:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setModelObject:(id)arg1;

@end
