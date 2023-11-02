
@interface _UICollectionViewOutlineCell : _UICollectionViewListCell {
    bool  _automaticallyTogglesExpansionState;
    _UICollectionViewOutlineCellDisclosureConfiguration * _disclosureConfiguration;
    id /* block */  _disclosureWasTappedHandler;
    double  _highlightCornerRadius;
    UIImageView * _imageView;
    UIView * _outlineContentView;
    bool  _selectionFollowsTintColor;
    UILabel * _textLabel;
}

@property (nonatomic) bool automaticallyTogglesExpansionState;
@property (nonatomic, copy) _UICollectionViewOutlineCellDisclosureConfiguration *disclosureConfiguration;
@property (nonatomic, copy) id /* block */ disclosureWasTappedHandler;
@property (nonatomic) double highlightCornerRadius;
@property (nonatomic, retain) id identifier;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) UIView *outlineContentView;
@property (nonatomic) bool selectionFollowsTintColor;
@property (nonatomic, readonly) UILabel *textLabel;

- (void).cxx_destruct;
- (bool)automaticallyTogglesExpansionState;
- (id)disclosureConfiguration;
- (id /* block */)disclosureWasTappedHandler;
- (double)highlightCornerRadius;
- (id)identifier;
- (id)imageView;
- (id)outlineContentView;
- (bool)selectionFollowsTintColor;
- (void)setAutomaticallyTogglesExpansionState:(bool)arg1;
- (void)setDisclosureConfiguration:(id)arg1;
- (void)setDisclosureWasTappedHandler:(id /* block */)arg1;
- (void)setHighlightCornerRadius:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOutlineContentView:(id)arg1;
- (void)setSelectionFollowsTintColor:(bool)arg1;
- (id)textLabel;

@end
