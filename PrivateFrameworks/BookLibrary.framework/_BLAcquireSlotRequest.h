
@interface _BLAcquireSlotRequest : ICRequestOperation {
    NSString * _deviceGUID;
    ICStoreRequestContext * _requestContext;
}

- (void).cxx_destruct;
- (void)_acquireSlotWithURL:(id)arg1;
- (void)execute;
- (id)initWithDeviceGUID:(id)arg1;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
