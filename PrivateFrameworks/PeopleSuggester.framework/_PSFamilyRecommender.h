
@interface _PSFamilyRecommender : NSObject {
    _PSContactResolver * _contactResolver;
    CNContactStore * _contactStore;
    _CDInteractionStore * _interactionStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKMedicalIDStore * _medicalIDStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) _PSContactResolver *contactResolver;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) _CDInteractionStore *interactionStore;
@property (nonatomic, retain) HKMedicalIDStore *medicalIDStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)contactIdsFromContactNamesUsingMe:(id)arg1;
- (id)contactIdsFromContactRelationsUsingMe:(id)arg1;
- (id)contactIdsFromEmergencyContacts;
- (id)contactKeysToFetch;
- (id)contactResolver;
- (id)contactStore;
- (id)currentFamily;
- (id)currentFamilyExcludingMe:(id)arg1;
- (id)familyRecipientsForShareSheetWithPredictionContext:(id)arg1;
- (id)familyRecommendationSuggestionsForShareSheetWithPredictionContext:(id)arg1;
- (id)familyRecommendations;
- (id)fetchAllContactIdsFromContactStore:(id)arg1;
- (id)handleAndBundleIdDictionaryForFamilyRecipientContact:(id)arg1 lookBackDays:(long long)arg2;
- (unsigned long long)indexToInsertDate:(id)arg1 array:(id)arg2;
- (id)init;
- (id)interactionStore;
- (void)logFeedbackForFamilyRecommenderCallHasRecommendations:(bool)arg1;
- (id)medicalIDStore;
- (id)nonFamilyRelations;
- (id)personRelationshipVocabularyByLocaleDictionary;
- (id)queue;
- (id)recipientFromFamilyContactId:(id)arg1 familySuggestions:(id)arg2 me:(id)arg3 currentFamilyIds:(id)arg4;
- (bool)regexMatchForRegex:(id)arg1 string:(id)arg2;
- (id)relationshipRegularExpressionForRelationship;
- (id)rerankFamilyRecipients:(id)arg1 usingPredictionContext:(id)arg2;
- (void)setContactResolver:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setInteractionStore:(id)arg1;
- (void)setMedicalIDStore:(id)arg1;
- (id)suggestionsForPhotosContactInferencesWithPredictionContext:(id)arg1;
- (id)suggestionsForPhotosRelationshipsWithPredictionContext:(id)arg1;
- (id)suggestionsFromRecipients:(id)arg1;

@end
