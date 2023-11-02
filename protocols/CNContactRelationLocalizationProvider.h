
@protocol CNContactRelationLocalizationProvider <NSObject>

@required

+ (NSArray *)preferredLanguages;
+ (NSArray *)supplementalLabelURLPairsForLanguages:(NSArray *)arg1;

@end
