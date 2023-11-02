
@interface SPUIWebCompletion : SPUICompletion

+ (bool)cardSectionIsWeb:(id)arg1;
+ (bool)supportsResult:(id)arg1 cardSection:(id)arg2;

- (bool)completionResultIsPotentiallyPunchout;
- (id)image;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;

@end
