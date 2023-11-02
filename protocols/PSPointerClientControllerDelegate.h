
@protocol PSPointerClientControllerDelegate <NSObject>

@optional

- (void)pointerClientController:(PSPointerClientController *)arg1 didInvalidatePortalSourceCollections:(NSSet *)arg2 matchMoveSources:(NSSet *)arg3;
- (void)pointerClientControllerClientInteractionEnabledDidChange:(PSPointerClientController *)arg1;
- (void)pointerClientControllerClientInteractionStateDidChange:(PSPointerClientController *)arg1;
- (void)pointerClientControllerDidInvalidateRemoteSources:(PSPointerClientController *)arg1;
- (void)pointerClientControllerPointerVisibilityStateDidChange:(PSPointerClientController *)arg1;
- (void)pointerClientControllerWillDecelerate:(PSPointerClientController *)arg1 targetPointerPosition:(inout struct CGPoint { double x1; double x2; }*)arg2 velocity:(struct CGPoint { double x1; double x2; })arg3 inContextID:(unsigned int)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7;
- (void)pointerClientControllerWillDecelerate:(void *)arg1 targetPointerPosition:(void *)arg2 velocity:(void *)arg3 inContextID:(void *)arg4 cursorRegionLookupRadius:(void *)arg5 cursorRegionLookupResolution:(void *)arg6 lookupConeAngle:(void *)arg7 resultHandler:(void *)arg8; // needs 8 arg types, found 13: PSPointerClientController *, struct CGPoint { double x1; double x2; }, struct CGPoint { double x1; double x2; }, unsigned int, double, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGPoint { double x1; double x2; }, void*

@end
