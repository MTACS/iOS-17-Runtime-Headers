
@interface CRKInternetDateServiceProxy : NSObject <CRKInternetDateFetching> {
    CRKValidXPCConnectionProvider * _connectionProvider;
}

@property (nonatomic, readonly) CRKValidXPCConnectionProvider *connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchInternetDateWithCompletion:(id /* block */)arg1;
- (id)connectionProvider;
- (void)fetchInternetDateWithCompletion:(id /* block */)arg1;
- (id)init;

@end
