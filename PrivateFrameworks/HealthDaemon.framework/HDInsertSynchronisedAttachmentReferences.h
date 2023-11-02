
@interface HDInsertSynchronisedAttachmentReferences : HDJournalableOperation {
    NSArray * _attachmentReferences;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttachmentReferences:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
