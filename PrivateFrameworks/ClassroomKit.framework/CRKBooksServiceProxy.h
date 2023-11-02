
@interface CRKBooksServiceProxy : NSObject <CRKBooksServiceInterface> {
    CRKValidXPCConnectionProvider * _connectionProvider;
}

@property (nonatomic, readonly) CRKValidXPCConnectionProvider *connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchBooksWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchChaptersWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)connectionProvider;
- (void)fetchBooksWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchChaptersWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
