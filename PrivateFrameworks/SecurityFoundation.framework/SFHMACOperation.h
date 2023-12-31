
@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {
    id  _hmacOperationInternal;
}

@property (nonatomic, copy) <SFDigestOperation> *digestOperation;

- (void).cxx_destruct;
- (id)digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;
- (void)setDigestOperation:(id)arg1;

@end
