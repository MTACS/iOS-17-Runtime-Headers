
@interface CKAddressBook : NSObject

+ (id)contactImageCache;
+ (id)contactImageOfDiameter:(double)arg1 forID:(id)arg2 monogramStyle:(long long)arg3 tintMonogramText:(bool)arg4;
+ (id)contactImageOfDiameter:(double)arg1 forID:(id)arg2 monogramStyle:(long long)arg3 tintMonogramText:(bool)arg4 customFont:(id)arg5;
+ (void)flushMonogrammers;
+ (id)locationSharingContactImageOfDiameter:(double)arg1 forID:(id)arg2 useCustomFont:(bool)arg3;
+ (id)monogrammerProvider;
+ (id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(bool)arg3 customFont:(id)arg4;
+ (id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(bool)arg3;
+ (id)transcriptContactImageOfDiameter:(double)arg1 forID:(id)arg2;

@end
