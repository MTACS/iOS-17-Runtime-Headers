
@interface PNPetPromoter : NSObject {
    void delegate;
    void metrics;
    void photoLibrary;
}

@property (nonatomic, readonly) <PNPersonPromoterDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *metrics;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;

+ (long long)kPNPetPromoterMaximumNumberOfPetsInPeopleHome;
+ (long long)kPNPetPromoterVerifiedPetMinimumNumberOfAssetsAlone;
+ (long long)kPNPetPromoterVerifiedPetMinimumNumberOfFaces;
+ (long long)kPNPetPromoterVerifiedPetMinimumNumberOfMoments;
+ (void)promoteUnverifiedPetsInPhotoLibrary:(id)arg1 withUpdateBlock:(id /* block */)arg2;
+ (id)statusWithPhotoLibrary:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (void)incrementMetricForKey:(id)arg1 withValue:(unsigned long long)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 andDelegate:(id)arg2;
- (id)metrics;
- (id)photoLibrary;
- (void)promoteUnverifiedPetsWithUpdateBlock:(id /* block */)arg1;
- (void)setMetrics:(id)arg1;

@end
