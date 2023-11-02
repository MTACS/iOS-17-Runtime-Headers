
@protocol KNAnimationPluginCARendering <KNAnimationPlugin>

@required

- (void)addAnimationsTo:(NSMapTable *)arg1 context:(id <KNAnimationPluginContext>)arg2;

@optional

- (void)restoreLayerHierarchy;

@end
