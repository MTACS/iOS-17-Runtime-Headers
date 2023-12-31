
@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell {
    UIImageView * _iconView;
    UIImageView * _newlyAddedView;
}

@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UIImageView *newlyAddedView;
@property (nonatomic) bool showNewlyAdded;

- (void).cxx_destruct;
- (id)_dotImage;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)newlyAddedView;
- (void)prepareForReuse;
- (void)setIconView:(id)arg1;
- (void)setNewlyAddedView:(id)arg1;
- (void)setShowNewlyAdded:(bool)arg1;
- (bool)showNewlyAdded;

@end
