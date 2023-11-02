
@interface POWSTrustAppliesToType : POWSTrustBaseRequestType {
    POWSTrustEndpointReferenceType * _EndpointReference;
}

@property (nonatomic, retain) POWSTrustEndpointReferenceType *EndpointReference;

+ (id)definition;

- (void).cxx_destruct;
- (id)EndpointReference;
- (id)description;
- (void)setEndpointReference:(id)arg1;

@end
