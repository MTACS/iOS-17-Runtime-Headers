
@interface PKPassTileView : UIButton {
    NSObject<OS_dispatch_source> * _actionStateTimeout;
    bool  _animated;
    struct { 
        double fadeInDelay; 
        bool iconHidden; 
        bool titleHidden; 
        bool bodyHidden; 
        bool spinnerHidden; 
        bool buttonHidden; 
        bool secondaryImageHidden; 
    }  _animationState;
    UILabel * _body;
    UIFont * _bodyFont;
    PKContinuousButton * _button;
    UIFont * _buttonFont;
    bool  _compact;
    PKPassTile * _content;
    PKPassTileState * _contentState;
    PKPassthroughView * _contentView;
    bool  _deferredSubviewUpdate;
    bool  _deferringUpdate;
    NSObject<OS_dispatch_source> * _effectiveContentTimeout;
    bool  _enabled;
    bool  _highlightable;
    bool  _highlighted;
    UIImageView * _icon;
    bool  _inActionState;
    struct CGSize { 
        double width; 
        double height; 
    }  _labelContainerSize;
    struct { 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } margins; 
        double innerHorizontalMargin; 
        double innerVerticalMargin; 
        bool cornerSpinner; 
        bool secondaryImageVisible; 
    }  _layoutState;
    UIFont * _regularFont;
    UIImageView * _secondaryImage;
    bool  _selectable;
    bool  _selected;
    UIFont * _significantFont;
    NSMutableArray * _snapshots;
    UIActivityIndicatorView * _spinner;
    PKPassTileView_State * _state;
    UILabel * _title;
    UIFont * _titleFont;
}

@property (getter=isCompact, nonatomic) bool compact;
@property (nonatomic, retain) PKPassTile *content;
@property (getter=isInActionState, nonatomic) bool inActionState;

- (void).cxx_destruct;
- (void)beginActionStateTimeout:(long long)arg1;
- (id)content;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCompact;
- (bool)isInActionState;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (void)performBatchUpdates:(id /* block */)arg1 animated:(bool)arg2;
- (void)prepareForReuse;
- (void)setCompact:(bool)arg1;
- (void)setCompact:(bool)arg1 animated:(bool)arg2;
- (void)setContent:(id)arg1;
- (void)setContent:(id)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInActionState:(bool)arg1;
- (void)setInActionState:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
