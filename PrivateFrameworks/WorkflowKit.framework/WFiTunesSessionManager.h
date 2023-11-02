
@interface WFiTunesSessionManager : NSObject {
    NSURL * _baseURL;
    NSURLSession * _session;
}

@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (nonatomic, readonly) NSURLSession *session;

- (void).cxx_destruct;
- (id)baseURL;
- (void)getMediaWithURL:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)lookupMediaWithBundleIdentifier:(id)arg1 countryCode:(id)arg2 completion:(id /* block */)arg3;
- (void)lookupMediaWithISBN:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)lookupMediaWithIdentifiers:(id)arg1 countryCode:(id)arg2 completion:(id /* block */)arg3;
- (void)lookupMediaWithUPC:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)searchForMediaOfType:(id)arg1 limitedToEntityType:(id)arg2 withTerm:(id)arg3 forAttribute:(id)arg4 countryCode:(id)arg5 limit:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (id)session;

@end
