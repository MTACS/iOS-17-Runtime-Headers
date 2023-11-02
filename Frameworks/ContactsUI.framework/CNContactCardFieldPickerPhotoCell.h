
@interface CNContactCardFieldPickerPhotoCell : UITableViewCell {
    CNAvatarView * _avatarView;
}

@property (nonatomic, retain) CNAvatarView *avatarView;

- (void).cxx_destruct;
- (id)avatarView;
- (id)init;
- (void)prepareCellWithContact:(id)arg1;
- (void)prepareForReuse;
- (void)setAvatarView:(id)arg1;
- (void)setConfiguration;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
