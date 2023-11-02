
@interface HDDiscardWorkoutOperation : HDJournalableOperation {
    NSUUID * _builderIdentifier;
}

@property (nonatomic, readonly, copy) NSUUID *builderIdentifier;

- (void).cxx_destruct;
- (id)builderIdentifier;
- (id)initWithBuilderIdentifier:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
