
@protocol GTServiceProvider

@required

- (NSArray *)allServices;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)deregisterService:(unsigned long long)arg1;
- (unsigned long long)registerObserver:(id <GTServiceProviderObserver>)arg1;
- (void)registerService:(GTServiceProperties *)arg1 forProcess:(GTProcessInfo *)arg2;
- (void)waitForService:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)waitForService:(NSString *)arg1 error:(id*)arg2;

@end
