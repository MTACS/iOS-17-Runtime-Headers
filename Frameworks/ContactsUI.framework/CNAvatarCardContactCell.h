
@interface CNAvatarCardContactCell : CNAvatarCardActionCell {
    UIImageView * _contactImageView;
}

@property (nonatomic, retain) UIImageView *contactImageView;

- (void).cxx_destruct;
- (void)_updateFonts;
- (void)awakeFromNib;
- (id)contactImageView;
- (bool)moreHighlighted;
- (void)prepareForReuse;
- (void)reloadData;
- (void)setContactImageView:(id)arg1;

@end
