
@interface SearchUIQuickActionCompletion : SearchUICompletion

+ (bool)supportsResult:(id)arg1 cardSection:(id)arg2;

- (bool)completionResultIsPotentiallyPunchout;
- (id)image;
- (id)prefixMatchExtensionString;

@end
