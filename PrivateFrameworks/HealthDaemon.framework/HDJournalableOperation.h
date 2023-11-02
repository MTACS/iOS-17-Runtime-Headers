
@interface HDJournalableOperation : HDJournalEntry <NSSecureCoding> {
    bool  _didJournal;
}

@property (nonatomic, readonly) bool didJournal;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (bool)didJournal;
- (bool)performOrJournalWithProfile:(id)arg1 error:(id*)arg2;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)transactionContext;

@end
