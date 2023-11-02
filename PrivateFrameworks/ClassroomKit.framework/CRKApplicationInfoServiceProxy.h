
@interface CRKApplicationInfoServiceProxy : NSObject <CRKApplicationInfoServiceInterface> {
    CRKValidXPCConnectionProvider * _connectionProvider;
}

@property (nonatomic, readonly) CRKValidXPCConnectionProvider *connectionProvider;

- (void).cxx_destruct;
- (void)_fetchApplicationWithDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)connectionProvider;
- (void)fetchApplicationWithDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
