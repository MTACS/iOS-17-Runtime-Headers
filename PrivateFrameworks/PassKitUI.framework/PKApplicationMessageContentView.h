
@interface PKApplicationMessageContentView : UIView {
    struct { 
        double fadeInDelay; 
        struct { 
            struct UIEdgeInsets { 
                double top; 
                double left; 
                double bottom; 
                double right; 
            } margins; 
        } previousLayoutState; 
    }  _animationState;
    CAFilter * _blurFilter;
    UILabel * _body;
    PKApplicationMessageContent * _content;
    UIView * _contentView;
    bool  _deferredSubviewUpdate;
    bool  _deferringUpdate;
    <PKApplicationMessageContentViewDelegate> * _delegate;
    UIButton * _dismiss;
    bool  _dismissable;
    double  _filterRadius;
    UIFont * _fixedSignificantFont;
    UIImageView * _icon;
    UIView * _iconContainer;
    struct { 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } margins; 
    }  _layoutState;
    UIFont * _regularFont;
    UIFont * _significantFont;
    NSMutableArray * _snapshots;
    PKApplicationMessageContentView_State * _state;
    UILabel * _title;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
