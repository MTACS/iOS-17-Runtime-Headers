
@interface POWSTrustReferenceType : POWSTrustBaseRequestType {
    POWSTrustSecurityTokenReferenceType * _SecurityTokenReference;
}

@property (nonatomic, retain) POWSTrustSecurityTokenReferenceType *SecurityTokenReference;

+ (id)definition;

- (void).cxx_destruct;
- (id)SecurityTokenReference;
- (id)description;
- (void)setSecurityTokenReference:(id)arg1;

@end
