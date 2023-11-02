
@interface _UISearchBarLayoutBase : NSObject <NSCopying> {
    long long  _barMetrics;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _hostedByNavigationBar;
    bool  _isLayoutValid;
    bool  _layoutRTL;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
}

@property (nonatomic) long long barMetrics;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (getter=isHostedByNavigationBar, nonatomic) bool hostedByNavigationBar;
@property (getter=isLayoutRTL, nonatomic) bool layoutRTL;
@property (nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (getter=isLayoutValid, nonatomic, readonly) bool layoutValid;

- (void)applyLayout;
- (long long)barMetrics;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)invalidateLayout;
- (bool)isHostedByNavigationBar;
- (bool)isLayoutRTL;
- (bool)isLayoutValid;
- (struct CGSize { double x1; double x2; })layoutSize;
- (void)setBarMetrics:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHostedByNavigationBar:(bool)arg1;
- (void)setLayoutRTL:(bool)arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateLayout;
- (void)updateLayoutIfNeeded;

@end
