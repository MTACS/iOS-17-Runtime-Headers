
@interface HMCRedirectorTuple : HMFObject <HMFCancellable> {
    HMCRedirector * _owner;
    SEL  _selector;
    id  _target;
}

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)cancel;
- (id)description;

@end
