
@interface EKAutocompleteSearch : NSObject {
    unsigned long long  _maximumResultCount;
}

@property unsigned long long maximumResultCount;

+ (id)searchWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 ignoreScheduledEvents:(bool)arg4 initialEvent:(id)arg5 pasteboardItemProvider:(id)arg6 completionHandler:(id /* block */)arg7;

- (unsigned long long)maximumResultCount;
- (void)setMaximumResultCount:(unsigned long long)arg1;

@end
