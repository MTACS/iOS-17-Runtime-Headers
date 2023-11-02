
@interface RemoteUITableViewCell : UITableViewCell {
    UIColor * _accessoryColor;
    bool  _activityIndicatorVisible;
    UIButton * _detailLinkButton;
    id /* block */  _detailLinkHandler;
    bool  _didSetupEditableTextFieldLargeText;
    bool  _forceFullSizeDetailLabel;
    UIImage * _image;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imagePadding;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIColor * _imageTintColor;
    UIImageView * _invalidRowView;
    bool  _leftAlignDetailLabel;
    long long  _remoteUIAccessoryType;
    UIView * _remoteUIAccessoryView;
    RUIWebContainerView * _webContainerView;
}

@property (nonatomic) bool activityIndicatorVisible;
@property (nonatomic) bool forceFullSizeDetailLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic) bool leftAlignDetailLabel;
@property (nonatomic) long long remoteUIAccessoryType;
@property (nonatomic, retain) UIView *remoteUIAccessoryView;
@property (nonatomic, retain) RUIWebContainerView *webContainerView;

- (void).cxx_destruct;
- (void)_accessoriesChanged;
- (id)_checkmarkImage:(bool)arg1;
- (void)_detailLinkPressed;
- (id)_disclosureChevronImage:(bool)arg1;
- (id)_paddedImageWithImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)_setRemoteUIAccessoryType:(long long)arg1 withColor:(id)arg2;
- (void)_showActivityIndicatorAccessory;
- (bool)activityIndicatorVisible;
- (void)addDetailLinkButton:(id)arg1;
- (id)detailLinkButton;
- (id)editableTextField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })expand:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 by:(struct CGSize { double x1; double x2; })arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (bool)forceFullSizeDetailLabel;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)layoutSubviews;
- (bool)leftAlignDetailLabel;
- (void)prepareForReuse;
- (long long)remoteUIAccessoryType;
- (id)remoteUIAccessoryView;
- (void)setActivityIndicatorVisible:(bool)arg1;
- (void)setDetailLinkText:(id)arg1 handler:(id /* block */)arg2;
- (void)setForceFullSizeDetailLabel:(bool)arg1;
- (void)setHTMLData:(id)arg1 sourceURL:(id)arg2 delegate:(id)arg3;
- (void)setHTMLSubLabelData:(id)arg1 sourceURL:(id)arg2 delegate:(id)arg3;
- (void)setImage:(id)arg1 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 tintColor:(id)arg3;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeftAlignDetailLabel:(bool)arg1;
- (void)setRemoteUIAccessoryType:(long long)arg1;
- (void)setRemoteUIAccessoryView:(id)arg1;
- (void)setRowInvalid:(bool)arg1;
- (void)setWebContainerView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)webContainerView;
- (double)webViewWidth;

@end
