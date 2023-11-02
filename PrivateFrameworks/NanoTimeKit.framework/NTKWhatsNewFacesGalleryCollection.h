
@interface NTKWhatsNewFacesGalleryCollection : NTKDeviceSpecificFacesArrayGalleryCollection

@property (nonatomic, readonly) bool hasNewFaces;

+ (id)_gloryBDefaultFacesForDevice:(id)arg1;
+ (id)_gloryEDefaultFacesForDevice:(id)arg1;
+ (id)_gloryFDefaultFacesForDevice:(id)arg1;
+ (id)_graceDefaultFacesForDevice:(id)arg1;
+ (id)_legacyDefaultFacesForDevice:(id)arg1;
+ (id)_pride2020DefaultFacesForDevice:(id)arg1;
+ (id)_spring2020DefaultFacesForDevice:(id)arg1;
+ (id)whistlerSubdialsSpring2020ComplicationTypesBySlot;

- (id)facesForDevice:(id)arg1;
- (bool)hasNewFaces;
- (id)initWithDevice:(id)arg1;
- (id)title;

@end
