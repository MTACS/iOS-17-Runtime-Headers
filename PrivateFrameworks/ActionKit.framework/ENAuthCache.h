
@interface ENAuthCache : NSObject {
    ENAuthCacheEntry * _businessCache;
    NSMutableDictionary * _linkedCache;
}

@property (nonatomic, retain) ENAuthCacheEntry *businessCache;
@property (nonatomic, retain) NSMutableDictionary *linkedCache;

- (void).cxx_destruct;
- (id)authenticationResultForBusiness;
- (id)authenticationResultForLinkedNotebookGuid:(id)arg1;
- (id)businessCache;
- (id)init;
- (id)linkedCache;
- (void)setAuthenticationResult:(id)arg1 forLinkedNotebookGuid:(id)arg2;
- (void)setAuthenticationResultForBusiness:(id)arg1;
- (void)setBusinessCache:(id)arg1;
- (void)setLinkedCache:(id)arg1;

@end
