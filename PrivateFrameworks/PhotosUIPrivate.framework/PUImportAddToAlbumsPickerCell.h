
@interface PUImportAddToAlbumsPickerCell : UITableViewCell {
    <PXDisplayCollection> * _collection;
    NSArray * _constraints;
    bool  _isPerformingUpdate;
    NSLayoutConstraint * _labelLeadingConstraintNoImage;
    NSLayoutConstraint * _labelLeadingConstraintWithImage;
    UIImage * _thumbnail;
    UIImageView * _thumbnailView;
    UILabel * _titleLabel;
    unsigned long long  _type;
}

@property (nonatomic, readonly) <PXDisplayCollection> *collection;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) NSLayoutConstraint *labelLeadingConstraintNoImage;
@property (nonatomic, retain) NSLayoutConstraint *labelLeadingConstraintWithImage;
@property (nonatomic, readonly) UIImage *thumbnail;
@property (nonatomic, retain) UIImageView *thumbnailView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_configureCell;
- (id)collection;
- (id)constraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSelectable;
- (id)labelLeadingConstraintNoImage;
- (id)labelLeadingConstraintWithImage;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setCollection:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setLabelLeadingConstraintNoImage:(id)arg1;
- (void)setLabelLeadingConstraintWithImage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)thumbnail;
- (id)thumbnailView;
- (id)titleLabel;
- (unsigned long long)type;
- (void)updateConstraints;
- (void)updateTitle;

@end
