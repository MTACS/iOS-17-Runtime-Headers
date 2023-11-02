
@interface PXPhotosMapControllerAccessor : NSObject <PXPlacesMapControllerAccess> {
    PXPlacesMapController * _mapController;
    PKExtendedTraitCollection * _pkExtendedTraitCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPlacesMapController *mapController;
@property (nonatomic, readonly) PKExtendedTraitCollection *pk_extendedTraitCollection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMapController:(id)arg1 traitCollection:(id)arg2;
- (id)mapController;
- (id)pk_extendedTraitCollection;

@end
