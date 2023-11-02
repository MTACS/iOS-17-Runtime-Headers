
@protocol SGSuggestionsServiceURLsProtocol <_SGSuggestionsServiceBaseProtocol>

@required

- (void)recentURLsWithLimit:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)registerURLFeedback:(void *)arg1 absoluteURL:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: unsigned char, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)urlsFoundBetweenStartDate:(void *)arg1 endDate:(void *)arg2 excludingBundleIdentifiers:(void *)arg3 containingSubstring:(void *)arg4 flagFilter:(void *)arg5 limit:(void *)arg6 withCompletion:(void *)arg7; // needs 7 arg types, found 13: NSDate *, NSDate *, NSSet *, NSString *, unsigned char, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)urlsFoundBetweenStartDate:(void *)arg1 endDate:(void *)arg2 excludingBundleIdentifiers:(void *)arg3 limit:(void *)arg4 withCompletion:(void *)arg5; // needs 5 arg types, found 11: NSDate *, NSDate *, NSSet *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
