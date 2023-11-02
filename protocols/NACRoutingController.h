
@protocol NACRoutingController <NSObject>

@required

- (NSArray *)availableAudioRoutes;
- (void)beginObservingRoutes;
- (<NACRoutingControllerDelegate> *)delegate;
- (void)endObservingRoutes;
- (id)initWithAudioCategory:(NSString *)arg1;
- (void)pickAudioRoute:(NACAudioRoute *)arg1;
- (NACAudioRoute *)pickedRoute;
- (void)setDelegate:(id <NACRoutingControllerDelegate>)arg1;

@end
