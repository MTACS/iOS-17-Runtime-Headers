
@interface FIAppStoreAvailability : NSObject

+ (bool)_isDeviceTablet;
+ (void)_isSupportedDeviceAvailableWithCompletion:(id /* block */)arg1;
+ (void)fetchIsFitnessAvailableForDeviceWithCompletion:(id /* block */)arg1;
+ (void)isFitnessPlusStorefrontContentAvailableWithCompletion:(id /* block */)arg1;

@end
