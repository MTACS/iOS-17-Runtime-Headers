
@interface NetTopoMiniStaticLayout : NSObject {
    NSMutableArray * _connectionLayers;
    CALayer * _containerLayer;
    int  _layoutOptions;
    id  _owningView;
    NSMutableArray * _topoDeviceLayers;
    NSArray * _topoDevicesDescriptor;
}

@property (nonatomic, retain) CALayer *containerLayer;
@property (nonatomic) int layoutOptions;
@property (nonatomic, retain) id owningView;
@property (nonatomic, readonly) NSArray *topoDeviceLayers;
@property (nonatomic, retain) NSArray *topoDevicesDescriptor;

- (id)containerLayer;
- (void)createLayoutForDevices:(id)arg1;
- (void)dealloc;
- (void)destroyDeviceLayers;
- (struct CGImage { }*)imageForDeviceSpec:(id)arg1 wantSmall:(bool)arg2 forContentsScale:(double)arg3;
- (id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2;
- (int)layoutOptions;
- (id)owningView;
- (void)performLayout;
- (void)setContainerLayer:(id)arg1;
- (void)setLayoutOptions:(int)arg1;
- (void)setOwningView:(id)arg1;
- (void)setTopoDevicesDescriptor:(id)arg1;
- (id)topoDeviceLayers;
- (id)topoDevicesDescriptor;

@end
