
@interface PXGItemPlacementContext : NSObject {
    NSMutableDictionary * _adjustedPreferredPlacementsByPlacementUUID;
    NSMutableDictionary * _placementUUIDsBySourceIdentifier;
    NSObject<UICoordinateSpace> * _referenceCoordinateSpace;
    PXGLayout * _referenceLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceOrigin;
}

@property (nonatomic, readonly) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (void)_adjustPreferredPlacementInSourceWithIdentifier:(id)arg1 configuration:(id /* block */)arg2;
- (id)_adjustedPreferredPlacementForPlacement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2 toLayout:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayout:(id)arg2 toCoordinateSpace:(id)arg3;
- (void)_registerOriginalPlacement:(id)arg1 forSourceIdentifiers:(id)arg2;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithOriginOfLayout:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;

@end
