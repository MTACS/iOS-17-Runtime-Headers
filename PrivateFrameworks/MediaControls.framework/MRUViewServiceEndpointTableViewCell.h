
@interface MRUViewServiceEndpointTableViewCell : UITableViewCell <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate> {
    MRUNowPlayingCellContentView * _cellContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    UIView * _separatorView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, readonly) MRUNowPlayingCellContentView *cellContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *separatorView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setShouldHaveFullLengthBottomSeparator:(bool)arg1;
- (id)cellContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (id)separatorView;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
