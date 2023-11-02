
@interface WFActionDrawerUtilities : NSObject

+ (id)activitySectionsForDonations:(id)arg1;
+ (id)appSectionsForActionSections:(id)arg1;
+ (id)appSectionsForDonations:(id)arg1;
+ (id)deduplicateAppSections:(id)arg1;
+ (id)filterAppSections:(id)arg1 searchQuery:(id)arg2;
+ (id)localizedAppNames;
+ (id)suggestionSectionsForDonations:(id)arg1 excludingConvertedLinkActions:(bool)arg2;

@end
