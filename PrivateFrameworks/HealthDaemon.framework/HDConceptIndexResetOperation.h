
@interface HDConceptIndexResetOperation : HDJournalableOperation

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
