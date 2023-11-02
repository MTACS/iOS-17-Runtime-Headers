
@interface AADeviceProvisioningRequest : AARequest {
    NSData * _data;
    NSString * _dsid;
    NSString * _url;
}

- (void).cxx_destruct;
- (id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end
