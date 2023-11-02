
@interface SXColumnVisualizerModifier : NSObject <SXDOMModifying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)componentLayoutWithJSON:(id)arg1;
- (id)componentStyleWithJSON:(id)arg1;
- (id)containerComponentWithJSON:(id)arg1;
- (void)modifyDOM:(id)arg1 context:(id)arg2;

@end
