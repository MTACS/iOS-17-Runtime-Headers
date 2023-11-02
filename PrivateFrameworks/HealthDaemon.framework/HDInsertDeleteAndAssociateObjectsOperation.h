
@interface HDInsertDeleteAndAssociateObjectsOperation : HDJournalableOperation {
    NSDictionary * _associations;
    NSArray * _objectsToDelete;
    NSDictionary * _objectsToInsertByDataProvenance;
}

@property (nonatomic, readonly, copy) NSDictionary *associations;
@property (nonatomic, readonly, copy) NSArray *objectsToDelete;
@property (nonatomic, readonly, copy) NSDictionary *objectsToInsertByDataProvenance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectsToInsertByDataProvenance:(id)arg1 objectsToDelete:(id)arg2 associations:(id)arg3;
- (id)objectsToDelete;
- (id)objectsToInsertByDataProvenance;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
