
@interface CKVDonatorFactory : NSObject <CKVDonatorProvider> {
    NSObject<KVDonateServiceProvider> * _serviceProvider;
}

- (void).cxx_destruct;
- (id)donatorWithItemType:(long long)arg1 originAppId:(id)arg2 error:(id*)arg3;
- (id)donatorWithItemType:(long long)arg1 originAppId:(id)arg2 userId:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithServiceProvider:(id)arg1;

@end
