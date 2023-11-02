
@interface PNPetPromoterWrapper : NSObject {
    PNPetPromoter * _petPromoter;
}

+ (unsigned long long)minimumNumberOfFacesNeededForPromotion;
+ (void)promoteUnverifiedPetsInPhotoLibrary:(id)arg1 withUpdateBlock:(id /* block */)arg2;
+ (id)statusWithLibrary:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)initWithLibrary:(id)arg1 andDelegate:(id)arg2;
- (void)promoteUnverifiedPetsWithUpdateBlock:(id /* block */)arg1;

@end
