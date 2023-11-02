
@interface HDInsertAttachmentOperation : HDJournalableOperation {
    HDAssertion * _assertion;
    HDAttachment * _attachment;
    NSArray * _attachmentReferences;
    bool  _fileOnDisk;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttachmentReferences:(id)arg1 attachment:(id)arg2 fileOnDisk:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)transactionContext;

@end
