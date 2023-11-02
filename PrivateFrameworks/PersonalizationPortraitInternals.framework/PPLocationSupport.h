
@interface PPLocationSupport : NSObject

+ (id)fullAddressOfLocation:(id)arg1;
+ (bool)fuzzyMatchingLocations:(id)arg1 and:(id)arg2;
+ (id)locationFromThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 postalCode:(id)arg6 category:(unsigned short)arg7;
+ (id)mapTitleForLocation:(id)arg1;
+ (id)streetAddressOfLocation:(id)arg1;

@end
