
@interface ASDatabaseCompetitionJournalEntry : HDJournalEntry {
    ASCodableDatabaseCompetition * _databaseCompetition;
}

@property (nonatomic, readonly) ASCodableDatabaseCompetition *databaseCompetition;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)databaseCompetition;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseCompetition:(id)arg1;

@end
