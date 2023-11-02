
@interface PKAccountWebServiceSharedAccountCloudStoreResponse : PKAccountWebServiceResponse {
    PKSharedAccountCloudStore * _sharedAccountCloudStore;
}

@property (nonatomic, readonly) PKSharedAccountCloudStore *sharedAccountCloudStore;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)sharedAccountCloudStore;

@end
