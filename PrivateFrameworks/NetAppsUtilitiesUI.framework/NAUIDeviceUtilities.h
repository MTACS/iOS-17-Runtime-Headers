
@interface NAUIDeviceUtilities : NSObject

+ (int)deviceClass;
+ (bool)hasOrbCapability;
+ (id)localizedProductName;
+ (double)mainScreenScale;
+ (bool)naui_isPad;
+ (bool)naui_isUsingLandscapeOrientation;
+ (bool)naui_shouldUseLargeiPadLayout;
+ (bool)naui_shouldUseLargeiPadLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)operatingSystemName;
+ (id)productBuildVersion;
+ (id)productClass;
+ (id)productHardwareModel;
+ (id)productHardwareModelName;
+ (id)productType;
+ (id)productVersion;
+ (id)uniqueDeviceIdentifier;

- (id)init;

@end
