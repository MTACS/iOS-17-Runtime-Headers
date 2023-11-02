
@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate> {
    NSObject<OS_dispatch_semaphore> * _mdQuerySem;
    NSMutableArray * _recentMDSearchQueryResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)searchQuery:(id)arg1 didFailWithError:(id)arg2;
- (void)searchQuery:(id)arg1 didReturnItems:(id)arg2;
- (void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2;

@end
