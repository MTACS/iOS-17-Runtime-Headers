
@interface _UICollectionTableIndexOverlayManager : NSObject {
    struct { 
        unsigned int indicatorViewVisible : 1; 
        unsigned int selectionViewVisible : 1; 
        unsigned int ignoringWheelEventsOnIndicator : 1; 
    }  _flags;
    UIView<_UICollectionTableIndexOverlayHost> * _host;
    NSString * _indexOverlayIndicatorViewText;
    NSTimer * _indicatorHideTimer;
    _UICollectionTableIndexOverlayIndicatorView * _indicatorView;
    double  _mediaTimeWhenIndicatorWasFirstPresentedInResponseToWheelEvent;
    _UICollectionTableIndexOverlaySelectionView * _selectionView;
}

- (void).cxx_destruct;

@end
