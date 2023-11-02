
@interface IMBrand : NSObject {
    BSBrand * _brand;
}

@property (nonatomic, readonly, retain) BSBrand *brand;
@property (nonatomic, readonly) NSString *brandURI;
@property (nonatomic, readonly) NSString *localizedResponseTime;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) UIColor *primaryBrandColor;
@property (nonatomic, readonly) NSString *primaryPhoneNumber;
@property (nonatomic, readonly) UIColor *secondaryBrandColor;
@property (getter=isVerified, nonatomic, readonly) bool verified;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)brandWithBSBrand:(id)arg1;
+ (id)placeholderName;

- (id)_init;
- (void)_setBrand:(id)arg1;
- (id)brand;
- (id)brandURI;
- (void)dealloc;
- (bool)isVerified;
- (id)localizedResponseTime;
- (id)name;
- (id)primaryPhoneNumber;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)makeBrandPlacecardForIMBrand:(id)arg1;

- (id)primaryBrandColor;
- (id)secondaryBrandColor;

@end
