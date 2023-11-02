
@interface MKLookAroundScene : NSObject <NSCopying> {
    GEOCameraFrame * _cameraFrameOverride;
    MKMapItem * _mapItem;
    GEOMuninViewState * _muninViewState;
    unsigned long long  _type;
    bool  _wantsCloseUpView;
}

@property (getter=_cameraFrameOverride, nonatomic, readonly) GEOCameraFrame *cameraFrameOverride;
@property (getter=_mapItem, nonatomic, readonly) MKMapItem *mapItem;
@property (getter=_muninViewState, nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (getter=_type, nonatomic, readonly) unsigned long long type;
@property (getter=_wantsCloseUpView, setter=_setWantsCloseUpView:, nonatomic) bool wantsCloseUpView;

- (void).cxx_destruct;
- (id)_cameraFrameOverride;
- (id)_mapItem;
- (id)_muninViewState;
- (void)_setWantsCloseUpView:(bool)arg1;
- (unsigned long long)_type;
- (bool)_wantsCloseUpView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 cameraFrameOverride:(id)arg2;
- (id)initWithMuninViewState:(id)arg1;

@end
