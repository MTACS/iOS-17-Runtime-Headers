
@interface CNEmailAddressUtilities : NSObject

+ (id)aliasedDomains;
+ (id)expandAliasedDomainsInAddress:(id)arg1;
+ (bool)isStringEmailAddress:(id)arg1;
+ (id)makeEmailRegex;
+ (id)safeUserVisibleEmailAddress:(id)arg1;

@end
