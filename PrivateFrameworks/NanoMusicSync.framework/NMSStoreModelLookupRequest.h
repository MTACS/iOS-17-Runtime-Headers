
@interface NMSStoreModelLookupRequest : MPStoreModelRequest {
    NSArray * _containerIDs;
}

@property (nonatomic, copy) NSArray *containerIDs;

- (void).cxx_destruct;
- (id)containerIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setContainerIDs:(id)arg1;

@end
