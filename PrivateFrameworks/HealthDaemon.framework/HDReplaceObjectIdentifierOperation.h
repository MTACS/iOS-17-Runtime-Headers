
@interface HDReplaceObjectIdentifierOperation : HDJournalableOperation {
    NSString * _objectIdentifier;
    NSString * _replacementIdentifier;
    NSString * _schemaIdentifier;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWithObjectIdentifier:(id)arg1 replacementIdentifier:(id)arg2 schemaIdentifier:(id)arg3;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
