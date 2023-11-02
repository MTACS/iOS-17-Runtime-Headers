
@protocol PKLibrary

@required

- (void)fetchMatchesFor:(void *)arg1 limit:(void *)arg2 resultsHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKSearchResult *, NSError *, void*
- (<PKSubscriptionController> *)subscriptionController;

@end
