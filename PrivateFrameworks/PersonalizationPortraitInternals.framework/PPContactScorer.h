
@interface PPContactScorer : NSObject

+ (id)mostRelevantContactsWithName:(id)arg1 store:(id)arg2;
+ (id)mostRelevantContactsWithStore:(id)arg1;
+ (id)mostRelevantContactsWithStore:(id)arg1 shouldContinueBlock:(id /* block */)arg2;
+ (void)scoreContactNameRecords:(id)arg1;
+ (id)scoredContactsWithContacts:(id)arg1;

@end
