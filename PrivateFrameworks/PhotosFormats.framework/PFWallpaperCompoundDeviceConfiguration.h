
@interface PFWallpaperCompoundDeviceConfiguration : NSObject <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _deviceSize;
    PFParallaxLayoutConfiguration * _landscapeConfiguration;
    PFParallaxLayoutConfiguration * _portraitConfiguration;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } deviceSize;
@property (nonatomic, readonly) PFParallaxLayoutConfiguration *landscapeConfiguration;
@property (nonatomic, readonly) PFParallaxLayoutConfiguration *portraitConfiguration;

+ (id)bestConfigurationForScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2;
+ (id)callServicesConfigurationWithScreenSize:(struct CGSize { double x1; double x2; })arg1 titleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 parallaxPadding:(struct CGSize { double x1; double x2; })arg3;
+ (id)compoundDeviceConfigurationFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)configurationWithDeviceName:(id)arg1;
+ (id)deviceCallServicesConfigurationWithTitleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)deviceConfiguration;
+ (bool)deviceSupportsLandscapeConfiguration;
+ (id)genericCallServicesConfigurationWithTitleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)genericConfiguration;
+ (id)genericPadConfiguration;
+ (id)knownDeviceConfigurations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (struct CGSize { double x1; double x2; })deviceSize;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPortraitConfiguration:(id)arg1 landscapeConfiguration:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLayoutConfiguration:(id)arg1;
- (id)landscapeConfiguration;
- (id)portraitConfiguration;

@end
