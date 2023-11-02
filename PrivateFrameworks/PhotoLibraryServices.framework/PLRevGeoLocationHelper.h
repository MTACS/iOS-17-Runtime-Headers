
@interface PLRevGeoLocationHelper : NSObject

+ (id)appleProviderID;
+ (id)autoNaviCountryCode;
+ (id)autoNaviProviderID;
+ (id)currentRevGeoProvider;
+ (bool)isAutoNaviCountryCode:(id)arg1;
+ (bool)isAutoNaviRevGeoProvider:(id)arg1;
+ (bool)isCurrentRevGeoProviderAutoNavi;
+ (void)simulateAutoNaviForBlock:(id /* block */)arg1;

@end
