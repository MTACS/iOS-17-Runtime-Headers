
@interface HDDeleteAttachmentReferenceOperation : HDJournalableOperation {
    long long  _cloudStatus;
    NSArray * _references;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferences:(id)arg1;
- (id)initWithSynchronizedReferences:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
