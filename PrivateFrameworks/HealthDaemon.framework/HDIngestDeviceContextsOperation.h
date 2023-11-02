
@interface HDIngestDeviceContextsOperation : HDJournalableOperation {
    HDAssertion * _assertion;
    NSString * _containerIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessibilityAssertion:(id)arg1 containerIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)transactionContext;

@end
