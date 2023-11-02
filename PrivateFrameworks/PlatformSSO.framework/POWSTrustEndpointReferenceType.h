
@interface POWSTrustEndpointReferenceType : POWSTrustBaseRequestType {
    NSString * _Address;
}

@property (nonatomic, copy) NSString *Address;

+ (id)definition;

- (void).cxx_destruct;
- (id)Address;
- (id)description;
- (void)setAddress:(id)arg1;

@end
