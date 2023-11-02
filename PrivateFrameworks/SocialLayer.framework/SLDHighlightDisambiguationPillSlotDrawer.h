
@interface SLDHighlightDisambiguationPillSlotDrawer : NSObject <UISSlotDrawer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)drawingWithStyle:(id)arg1 tag:(id)arg2 forRemote:(bool)arg3;
- (struct CGImage { }*)imageWithStyle:(id)arg1 tag:(id)arg2 forRemote:(bool)arg3;

@end
