
@interface SearchUICommandCompletion : SearchUICompletion

+ (bool)supportsResult:(id)arg1 cardSection:(id)arg2;

- (id)command;
- (bool)completionResultIsPotentiallyPunchout;
- (id)image;
- (id)prefixMatchExtensionString;
- (void)updateFields;

@end
