
@interface GEOAPUtils : NSObject

+ (id)GEOAPApplicationIdentifier;
+ (void)appTypeForAppId:(id)arg1 resultBlock:(id /* block */)arg2;
+ (id)daemonIdAdditions;
+ (id)daemonSet;
+ (id)firstPartySet;
+ (int)functionalAppGroup;
+ (int)myAppType;

@end
