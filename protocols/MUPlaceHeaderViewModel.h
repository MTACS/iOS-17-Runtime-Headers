
@protocol MUPlaceHeaderViewModel <NSObject>

@required

- (NSAttributedString *)addressDescriptionForContact;
- (UIColor *)coverPhotoBackgroundColor;
- (NSAttributedString *)enclosingPlaceAttributedStringWithFont:(UIFont *)arg1 labelColor:(UIColor *)arg2 tokenColor:(UIColor *)arg3;
- (MULabeledTokenViewModel *)enclosingPlaceViewModel;
- (bool)hasEnclosingPlace;
- (bool)hasHeroImage;
- (bool)hasInitialData;
- (bool)isClaimed;
- (bool)isVerified;
- (void)loadCoverPhotoWithSize:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, bool, void*
- (void)loadHeroImageWithSize:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, bool, void*
- (void)loadVerifiedLogoImageWithSize:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, bool, void*
- (UIColor *)logoBackgroundColor;
- (NSString *)placeName;
- (NSString *)placeSecondaryName;
- (void)refineEnclosingMapItemWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MKMapItem *, NSError *, void*
- (bool)supportsContactAddressDescription;
- (bool)supportsEnhancedBusinessHeader;
- (bool)supportsLogo;
- (NSArray *)transitLabelItems;

@end
