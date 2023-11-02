
@protocol RMConfigurationSubscriberXPCService

@required

- (void)fetchThenApplyConfigurationsWithScope:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchThenUpdateConfigurationUIsWithScope:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)publishStatusKeys:(void *)arg1 storeIdentifier:(void *)arg2 scope:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
