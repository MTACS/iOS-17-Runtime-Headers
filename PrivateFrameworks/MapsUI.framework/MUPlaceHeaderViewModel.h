
@interface MUPlaceHeaderViewModel : NSObject <MUPlaceHeaderViewModel> {
    MKMapItem * _enclosingMapItem;
    NSString * _enclosingPlaceString;
    MULabeledTokenViewModel * _enclosingPlaceViewModel;
    NSString * _labelString;
    MKMapItem * _mapItem;
}

@property (nonatomic, readonly) NSAttributedString *addressDescriptionForContact;
@property (getter=isClaimed, nonatomic, readonly) bool claimed;
@property (nonatomic, readonly) UIColor *coverPhotoBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MKMapItemIdentifier *enclosingMapItemIdentifier;
@property (nonatomic, readonly) MULabeledTokenViewModel *enclosingPlaceViewModel;
@property (nonatomic, readonly) bool hasEnclosingPlace;
@property (nonatomic, readonly) bool hasHeroImage;
@property (nonatomic, readonly) bool hasInitialData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *logoBackgroundColor;
@property (nonatomic, readonly) NSString *placeName;
@property (nonatomic, readonly) NSString *placeSecondaryName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsContactAddressDescription;
@property (nonatomic, readonly) bool supportsEnhancedBusinessHeader;
@property (nonatomic, readonly) bool supportsLogo;
@property (nonatomic, readonly) NSArray *transitLabelItems;
@property (getter=isVerified, nonatomic, readonly) bool verified;

- (void).cxx_destruct;
- (void)_buildEnclosingPlace;
- (id)addressDescriptionForContact;
- (id)coverPhotoBackgroundColor;
- (id)enclosingMapItemIdentifier;
- (id)enclosingPlaceAttributedStringWithFont:(id)arg1 labelColor:(id)arg2 tokenColor:(id)arg3;
- (id)enclosingPlaceViewModel;
- (bool)hasEnclosingPlace;
- (bool)hasHeroImage;
- (bool)hasInitialData;
- (id)initWithMapItem:(id)arg1;
- (bool)isClaimed;
- (bool)isVerified;
- (void)loadCoverPhotoWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)loadHeroImageWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)loadVerifiedLogoImageWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)logoBackgroundColor;
- (id)placeName;
- (id)placeSecondaryName;
- (void)refineEnclosingMapItemWithCompletion:(id /* block */)arg1;
- (bool)supportsContactAddressDescription;
- (bool)supportsEnhancedBusinessHeader;
- (bool)supportsLogo;
- (id)transitLabelItems;

@end
