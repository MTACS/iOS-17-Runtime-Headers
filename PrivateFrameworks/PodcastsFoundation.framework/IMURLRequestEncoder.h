
@interface IMURLRequestEncoder : AMSURLRequestEncoder <IMRequestEncoding> {
    bool  personalizeRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool personalizeRequests;
@property (readonly) Class superclass;

- (id)initWithBag:(id)arg1;
- (bool)personalizeRequests;
- (void)prepareRequest:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (void)setPersonalizeRequests:(bool)arg1;

@end
