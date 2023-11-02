
@interface HMCRedirectorStrongTuple : HMFObject {
    SEL  _selector;
    id  _target;
    HMCRedirectorTuple * _tuple;
}

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
