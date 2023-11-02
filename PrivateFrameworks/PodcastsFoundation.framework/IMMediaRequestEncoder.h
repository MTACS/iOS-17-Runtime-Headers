
@interface IMMediaRequestEncoder : AMSMediaRequestEncoder <IMRequestEncoding> {
    bool  personalizeRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool personalizeRequests;
@property (readonly) Class superclass;

- (id)initWithBag:(id)arg1 session:(id)arg2;
- (bool)personalizeRequests;
- (void)prepareRequest:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;
- (void)prepareRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setPersonalizeRequests:(bool)arg1;

@end
