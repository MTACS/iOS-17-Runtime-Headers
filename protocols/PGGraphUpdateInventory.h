
@protocol PGGraphUpdateInventory <NSObject>

@required

- (NSSet *)contactIdentifiersOfPersonsToUpdate;
- (bool)hasHighlightDayGroupsToInsert;
- (bool)hasHighlightsToDelete;
- (bool)hasHighlightsToInsert;
- (bool)hasHighlightsToUpdate;
- (bool)hasMomentsToDelete;
- (bool)hasMomentsToInsert;
- (bool)hasMomentsToUpdate;
- (bool)hasPersonsToDelete;
- (bool)hasPersonsToInsert;
- (bool)hasPersonsToUpdate;
- (NSSet *)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(bool)arg3;
- (NSSet *)identifiersForMemoriesRelatedToDeletedMoments;
- (NSSet *)identifiersForMomentRelatedToDeletedPersons;
- (NSSet *)identifiersForMomentRelatedToUpdatedPersons;
- (bool)isResumingFullAnalysis;
- (NSSet *)localIdentifiersOfPersonsToDelete;
- (NSSet *)localIdentifiersOfPersonsToInsert;
- (NSSet *)localIdentifiersOfPersonsToUpdate;
- (NSSet *)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(bool)arg2;
- (void)setIsResumingFullAnalysis:(bool)arg1;
- (long long)updateType;
- (NSSet *)uuidsOfHighlightsToDelete;
- (NSSet *)uuidsOfHighlightsToInsert;
- (NSSet *)uuidsOfHighlightsToUpdate;
- (NSSet *)uuidsOfMomentsToDelete;
- (NSSet *)uuidsOfMomentsToInsert;
- (NSSet *)uuidsOfMomentsToUpdate;

@end
