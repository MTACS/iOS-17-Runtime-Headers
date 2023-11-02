
@interface NMSKeepLocalRequestProxy : NMSKeepLocalRequest {
    NMSMediaSyncService * _mediaSyncService;
}

- (void).cxx_destruct;
- (id)initWithModelObject:(id)arg1 enableState:(long long)arg2;
- (void)performWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
