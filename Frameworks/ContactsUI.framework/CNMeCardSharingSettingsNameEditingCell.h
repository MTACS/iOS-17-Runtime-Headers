
@interface CNMeCardSharingSettingsNameEditingCell : UICollectionViewListCell {
    UITextField * _textField;
}

@property (nonatomic, retain) UITextField *textField;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setTextField:(id)arg1;
- (id)textField;

@end
