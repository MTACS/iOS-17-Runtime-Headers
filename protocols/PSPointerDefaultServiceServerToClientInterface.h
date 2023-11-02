
@protocol PSPointerDefaultServiceServerToClientInterface <NSObject>

@required

- (oneway void)adjustedDecelerationTargetPointerPosition:(void *)arg1 velocity:(void *)arg2 inContextID:(void *)arg3 cursorRegionLookupRadius:(void *)arg4 cursorRegionLookupResolution:(void *)arg5 lookupConeAngle:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSValue *, NSValue *, NSNumber *, NSNumber *, NSNumber *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSValue *, NSError *, void*
- (oneway void)clientInteractionStateDidChange:(NSNumber *)arg1;
- (oneway void)invalidatedPortalSourceCollections:(NSSet<__PSPointerPortalSourceCollection__> *)arg1 matchMoveSources:(NSSet<__PSMatchMoveSource__> *)arg2;
- (oneway void)pointerVisibilityStateDidChange:(NSNumber *)arg1;

@end
