
@interface HDDismissedDrugInteractionResultInsertOperation : HDJournalableOperation {
    NSArray * _dismissedResults;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDismissedDrugInteractionResults:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
