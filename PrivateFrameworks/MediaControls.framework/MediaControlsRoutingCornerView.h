
@interface MediaControlsRoutingCornerView : CCUICAPackageView <UIPointerInteractionDelegate> {
    long long  _deviceType;
    bool  _routesAvailable;
    bool  _routing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (getter=routesAreAvailable, nonatomic) bool routesAvailable;
@property (getter=isRouting, nonatomic) bool routing;
@property (readonly) Class superclass;

- (void)_updateGlyph;
- (long long)deviceType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRouting;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (bool)routesAreAvailable;
- (void)setDeviceType:(long long)arg1;
- (void)setRoutesAvailable:(bool)arg1;
- (void)setRouting:(bool)arg1;

@end
