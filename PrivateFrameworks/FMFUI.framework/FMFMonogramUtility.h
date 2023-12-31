
@interface FMFMonogramUtility : NSObject

+ (void)clearMonogramCache;
+ (id)contactImageCache;
+ (id)contactStatusCache;
+ (struct __CFString { }*)hexStringFromColor:(id)arg1;
+ (id)monogramImageOfDiameter:(double)arg1 forContact:(id)arg2 monogramStyle:(long long)arg3 tintColor:(id)arg4 customFont:(id)arg5 isPersonImage:(bool*)arg6;
+ (id)monogramImageOfDiameter:(double)arg1 forContact:(id)arg2 useTintColor:(id)arg3 useCustomFont:(bool)arg4 isPersonImage:(bool*)arg5;
+ (id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useTintColor:(id)arg3 customFont:(id)arg4;
+ (id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 useTintColor:(id)arg3;

@end
