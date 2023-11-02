
@interface GEOAmenityItem : NSObject <MUAmenityItemViewModel> {
    GEOPDAmenityValue * _amenityValue;
}

@property (getter=isAmenityPresent, nonatomic, readonly) bool amenityPresent;
@property (nonatomic, readonly) NSString *amenityTitle;
@property (nonatomic, readonly) int amenityType;
@property (getter=isApplePayAmenity, nonatomic, readonly) bool applePayAmenity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *resolvedRibbonSymbolName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolImageName;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)amenityItemsFromPDAmenityItems:(id)arg1;

- (void).cxx_destruct;
- (id)amenityTitle;
- (int)amenityType;
- (id)description;
- (id)initWithAmenityValue:(id)arg1;
- (bool)isAmenityPresent;
- (bool)isApplePayAmenity;
- (id)symbolImageName;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)displayTitle;
- (id)resolvedRibbonSymbolName;
- (id)symbolImageForFont:(id)arg1;

@end
