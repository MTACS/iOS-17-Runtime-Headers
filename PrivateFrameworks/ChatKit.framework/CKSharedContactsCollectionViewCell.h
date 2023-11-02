
@interface CKSharedContactsCollectionViewCell : CKSharedContentsCollectionViewCell {
    CNAvatarView * _avatarView;
}

@property (nonatomic, retain) CNAvatarView *avatarView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)avatarView;
- (void)configureWithContact:(id)arg1;
- (void)layoutSubviews;
- (void)setAvatarView:(id)arg1;

@end
