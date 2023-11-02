
@interface ATXStableContactRepresentationDatastore : NSObject <ATXStableContactRepresentationProviderProtocol> {
    CNContactStore * _contactStore;
    ATXStableContactRepresentationDatabase * _stableContactRepresentationDatabase;
}

- (void).cxx_destruct;
- (id)cnContactForCnContactId:(id)arg1 rawIdentifier:(id)arg2;
- (id)cnContactIdWithStableContactIdentifier:(id)arg1;
- (id)contactInfoDictionaryWithContactId:(id)arg1 rawIdentifier:(id)arg2;
- (id)init;
- (id)initWithStableContactRepresentationDatabase:(id)arg1;
- (id)initWithStableContactRepresentationDatabase:(id)arg1 contactStore:(id)arg2;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)arg1 stableContactIdentifier:(id)arg2;
- (id)refreshCnContactIdsGivenContactEntities:(id)arg1;
- (id)stableContactIdentifierWithCnContactId:(id)arg1;
- (id)stableContactRepresentationForCnContactId:(id)arg1 rawIdentifier:(id)arg2;
- (id)stableContactRepresentationForStableContactIdentifier:(id)arg1;
- (id)updateAndGetStableContactIdentifier:(id)arg1 rawIdentifier:(id)arg2;

@end
