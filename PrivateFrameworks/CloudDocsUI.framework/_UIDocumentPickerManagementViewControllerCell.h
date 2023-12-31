
@interface _UIDocumentPickerManagementViewControllerCell : UITableViewCell {
    UIImageView * _newlyAddedView;
}

@property (nonatomic, retain) UIImageView *newlyAddedView;
@property (nonatomic) bool showNewlyAdded;

- (void).cxx_destruct;
- (id)_dotImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)newlyAddedView;
- (void)prepareForReuse;
- (void)setNewlyAddedView:(id)arg1;
- (void)setShowNewlyAdded:(bool)arg1;
- (bool)showNewlyAdded;

@end
