
@interface MKLookAroundEntryPoint : NSObject {
    GEOCameraFrame * _cameraFrameOverride;
    double  _heading;
    MKMapItem * _mapItem;
    VKMuninMarker * _muninMarker;
    GEOMuninViewState * _muninViewState;
    int  _triggerAction;
    unsigned long long  _type;
    bool  _wantsCloseUpView;
}

@property (nonatomic, retain) GEOCameraFrame *cameraFrameOverride;
@property (nonatomic) double heading;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) VKMuninMarker *muninMarker;
@property (nonatomic, retain) GEOMuninViewState *muninViewState;
@property (nonatomic) int triggerAction;
@property (nonatomic) unsigned long long type;
@property (nonatomic) bool wantsCloseUpView;

+ (id)entryPointWithMapItem:(id)arg1;
+ (id)entryPointWithMapItem:(id)arg1 triggerAction:(int)arg2;
+ (id)entryPointWithMapItem:(id)arg1 wantsCloseUpView:(bool)arg2;
+ (id)entryPointWithMapItem:(id)arg1 wantsCloseUpView:(bool)arg2 cameraFrameOverride:(id)arg3;
+ (id)entryPointWithMapItem:(id)arg1 wantsCloseUpView:(bool)arg2 cameraFrameOverride:(id)arg3 triggerAction:(int)arg4;
+ (id)entryPointWithMapItem:(id)arg1 wantsCloseUpView:(bool)arg2 triggerAction:(int)arg3;
+ (id)entryPointWithMuninMarker:(id)arg1 heading:(double)arg2;
+ (id)entryPointWithMuninViewState:(id)arg1;
+ (id)entryPointWithMuninViewState:(id)arg1 triggerAction:(int)arg2;
+ (id)entryPointWithScene:(id)arg1 wantsCloseUpView:(bool)arg2;

- (void).cxx_destruct;
- (id)cameraFrameOverride;
- (double)heading;
- (id)init;
- (id)mapItem;
- (id)muninMarker;
- (id)muninViewState;
- (void)setCameraFrameOverride:(id)arg1;
- (void)setHeading:(double)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMuninMarker:(id)arg1;
- (void)setMuninViewState:(id)arg1;
- (void)setTriggerAction:(int)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setWantsCloseUpView:(bool)arg1;
- (int)triggerAction;
- (unsigned long long)type;
- (bool)wantsCloseUpView;

@end
