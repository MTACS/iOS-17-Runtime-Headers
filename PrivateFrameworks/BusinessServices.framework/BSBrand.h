
@interface BSBrand : NSObject {
    BSBrandMessagingDetails * _messagingDetails;
    BSBrandObjcShim * _shim;
}

@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) bool isAppleMainBrand;
@property (nonatomic, readonly) bool isAppleMakoBrand;
@property (nonatomic, readonly) BSBrandMessagingDetails *messagingDetails;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIColor *primaryBrandColor;
@property (getter=_primaryBrandColorHexString, nonatomic, readonly) NSString *primaryBrandColorHexString;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) UIColor *secondaryBrandColor;
@property (getter=_secondaryBrandColorHexString, nonatomic, readonly) NSString *secondaryBrandColorHexString;
@property (nonatomic, readonly) BSBrandObjcShim *shim;
@property (getter=isVerified, nonatomic, readonly) bool verified;

// Image: /System/Library/PrivateFrameworks/BusinessServices.framework/BusinessServices

+ (id)placeholderName;

- (void).cxx_destruct;
- (id)_initWithShim:(id)arg1;
- (id)_primaryBrandColorHexString;
- (id)_secondaryBrandColorHexString;
- (id)brandURI;
- (bool)isAppleMainBrand;
- (bool)isAppleMakoBrand;
- (bool)isVerified;
- (id)messagingDetails;
- (id)name;
- (id)primaryPhoneNumber;
- (id)shim;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/BusinessServicesUI.framework/BusinessServicesUI

+ (id)makeBrandPlacecardForBrand:(id)arg1;

- (id)primaryBrandColor;
- (id)secondaryBrandColor;

@end
