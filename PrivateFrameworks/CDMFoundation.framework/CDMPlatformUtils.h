
@interface CDMPlatformUtils : NSObject

+ (bool)isAppleTV;
+ (bool)isHomePod;
+ (bool)isInternalInstall;
+ (id)normalizeLocaleIdentifier:(id)arg1;
+ (id)normalizedAssistantLocaleIdentifier;
+ (id)prettyPrintError:(id)arg1;
+ (id)prettyPrintJson:(id)arg1;

@end
