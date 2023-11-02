
@interface _UITableViewReorderingSupport : NSObject {
    NSTimer * _autoscrollTimer;
    UIShadowView * _bottomShadowView;
    bool  _hadAdjustsContentInsetWhenScrollDisabled;
    NSIndexPath * _initialIndexPath;
    unsigned int  _oldShowHorizontalScrollIndicator;
    unsigned int  _oldShowVerticalScrollIndicator;
    unsigned int  _reloadDataCalled;
    UITableViewCell * _reorderedCell;
    unsigned int  _reorderingCancelled;
    NSIndexPath * _targetIndexPath;
    UIShadowView * _topShadowView;
    bool  _wasScrollingEnabled;
}

- (void).cxx_destruct;

@end
