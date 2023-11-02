
@interface TCSTinCanUserDefaults : NSUserDefaults

+ (id)allowListKey;
+ (id)defaults;
+ (id)storeDemoAllowlistKey;
+ (id)suggestionExpiryReasonAllowlistedValue;

- (void)clearUserData;

@end
