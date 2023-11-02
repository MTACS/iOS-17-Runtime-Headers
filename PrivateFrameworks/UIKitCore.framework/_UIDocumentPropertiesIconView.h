
@interface _UIDocumentPropertiesIconView : UIView {
    NSLayoutConstraint * _bottomInsetConstraint;
    NSLayoutConstraint * _centerXInsetConstraint;
    NSLayoutConstraint * _centerYInsetConstraint;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _iconInsets;
    LPLinkView * _linkView;
    LPLinkMetadata * _metadata;
    UIDocumentProperties * _properties;
    NSLayoutConstraint * _trailingInsetConstraint;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } iconInsets;
@property (nonatomic, retain) LPLinkMetadata *metadata;

- (void).cxx_destruct;
- (void)_fireTapAction:(id)arg1;
- (id)_preferredPresentationSourceItem;
- (id)_preferredSender;
- (void)_updateImage;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })iconInsets;
- (id)initWithMetadata:(id)arg1;
- (id)initWithProperties:(id)arg1 metadata:(id)arg2;
- (id)metadata;
- (void)setIconInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMetadata:(id)arg1;

@end
