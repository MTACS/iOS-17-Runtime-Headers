
@interface UIAlertControllerDescriptor : NSObject <NSCopying> {
    bool  _applicationIsFullscreen;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _containerViewSafeAreaInsets;
    bool  _hasContentViewController;
    bool  _hasHeaderContentViewController;
    bool  _hasMessage;
    bool  _hasTitle;
    long long  _numberOfActions;
    long long  _numberOfVisibleActions;
}

@property bool applicationIsFullscreen;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } containerViewSafeAreaInsets;
@property bool hasContentViewController;
@property bool hasHeaderContentViewController;
@property bool hasMessage;
@property bool hasTitle;
@property long long numberOfActions;
@property long long numberOfVisibleActions;

- (bool)applicationIsFullscreen;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerViewSafeAreaInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasContentViewController;
- (bool)hasHeaderContentViewController;
- (bool)hasMessage;
- (bool)hasTitle;
- (bool)isEqual:(id)arg1;
- (long long)numberOfActions;
- (long long)numberOfVisibleActions;
- (void)setApplicationIsFullscreen:(bool)arg1;
- (void)setContainerViewSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHasContentViewController:(bool)arg1;
- (void)setHasHeaderContentViewController:(bool)arg1;
- (void)setHasMessage:(bool)arg1;
- (void)setHasTitle:(bool)arg1;
- (void)setNumberOfActions:(long long)arg1;
- (void)setNumberOfVisibleActions:(long long)arg1;

@end
