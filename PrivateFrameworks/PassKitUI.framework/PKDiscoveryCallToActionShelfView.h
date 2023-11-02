
@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView <PKLinkedApplicationObserver> {
    PKContinuousButton * _button;
    PKDiscoveryCallToAction * _callToAction;
    PKDiscoveryCallToActionShelf * _ctaShelf;
    <PKDiscoveryCardViewDelegate> * _delegate;
    UILabel * _editorialDescriptionLabel;
    UIImageView * _iconImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    PKLinkedApplication * _linkedApplication;
    PKDiscoveryMedia * _media;
    bool  _showActivityIndicator;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDiscoveryCardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showActivityIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })_iconSize;
- (double)_leadingEditorialTextSpace;
- (double)_leadingTitleSpace;
- (struct CGSize { double x1; double x2; })_sizeForMedia;
- (id)delegate;
- (id)initWithShelf:(id)arg1;
- (void)layoutSubviews;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (void)setShowActivityIndicator:(bool)arg1;
- (bool)showActivityIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
