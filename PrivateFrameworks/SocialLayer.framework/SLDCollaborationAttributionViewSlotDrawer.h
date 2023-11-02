
@interface SLDCollaborationAttributionViewSlotDrawer : NSObject <UISSlotDrawer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)resolvedStyleForStyle:(id)arg1 tag:(id)arg2;

- (unsigned long long)authenticationMessageContextForStyle:(id)arg1 tag:(id)arg2;
- (id)drawingWithStyle:(id)arg1 tag:(id)arg2 forRemote:(bool)arg3;
- (unsigned long long)hitTestInformationMaskForStyle:(id)arg1 tag:(id)arg2;
- (struct CGImage { }*)imageWithStyle:(id)arg1 tag:(id)arg2 forRemote:(bool)arg3;
- (id)resolvedStyleForStyle:(id)arg1 tag:(id)arg2;

@end
