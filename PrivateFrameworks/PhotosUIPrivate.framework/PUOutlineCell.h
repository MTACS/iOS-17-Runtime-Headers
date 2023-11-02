
@interface PUOutlineCell : _UICollectionViewOutlineCell {
    UIImageView * _accessoryImageView;
    <PUOutlineCellDelegate> * _delegate;
    UIImage * _image;
    <PXNavigationListItem> * _item;
    long long  _mediaRequestID;
    long long  _style;
    NSString * _text;
}

@property (nonatomic, retain) UIImageView *accessoryImageView;
@property (nonatomic) <PUOutlineCellDelegate> *delegate;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) <PXNavigationListItem> *item;
@property (nonatomic) long long mediaRequestID;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)_editingConfigurationForState:(unsigned long long)arg1;
- (bool)_hasEditSpecificAccessories;
- (void)_renameItem:(id)arg1 toTitle:(id)arg2;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (id)accessoryImageView;
- (bool)canBecomeFocused;
- (id)delegate;
- (id)image;
- (id)item;
- (long long)mediaRequestID;
- (void)prepareForReuse;
- (void)setAccessoryImageView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMediaRequestID:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (long long)style;
- (id)text;

@end
