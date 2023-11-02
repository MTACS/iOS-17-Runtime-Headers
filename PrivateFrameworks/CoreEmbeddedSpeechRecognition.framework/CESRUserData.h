
@interface CESRUserData : NSObject <NSSecureCoding> {
    NSArray * _appNames;
    NSArray * _contactWordsWithFrequency;
    NSArray * _corrections;
    NSArray * _eventLocationNames;
    NSArray * _eventTitles;
    NSDictionary * _interactionSenderDisplayNames;
    NSDictionary * _keyboardLMDynamicVocabularyItems;
    NSString * _language;
    NSArray * _locationOfInterestNames;
    NSArray * _pexNamedEntityNames;
    NSMutableSet * _radioWords;
    NSDictionary * _searchEventValues;
    NSArray * _spatialLocationOfInterestNames;
    NSArray * _uaapWords;
    NSDictionary * _vocabularyWords;
}

@property (nonatomic, copy) NSArray *appNames;
@property (nonatomic, copy) NSArray *contactWordsWithFrequency;
@property (nonatomic, copy) NSArray *corrections;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSArray *eventLocationNames;
@property (nonatomic, copy) NSArray *eventTitles;
@property (nonatomic, copy) NSDictionary *interactionSenderDisplayNames;
@property (nonatomic, copy) NSDictionary *keyboardLMDynamicVocabularyItems;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, copy) NSArray *locationOfInterestNames;
@property (nonatomic, copy) NSArray *pexNamedEntityNames;
@property (nonatomic, copy) NSMutableSet *radioWords;
@property (nonatomic, copy) NSDictionary *searchEventValues;
@property (nonatomic, copy) NSArray *spatialLocationOfInterestNames;
@property (nonatomic, copy) NSArray *uaapWords;
@property (nonatomic, copy) NSDictionary *vocabularyWords;

+ (id)_vocabularyWordCategories;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_handleContacts:(id)arg1;
- (id)_handleVocabularyWords:(id)arg1 template:(id)arg2;
- (id)_initWithLanguage:(id)arg1;
- (id)appNames;
- (id)contactWordsWithFrequency;
- (id)corrections;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)eventLocationNames;
- (id)eventTitles;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 language:(id)arg2;
- (id)interactionSenderDisplayNames;
- (bool)isEqual:(id)arg1;
- (id)keyboardLMDynamicVocabularyItems;
- (id)language;
- (id)locationOfInterestNames;
- (id)pexNamedEntityNames;
- (void)populateUserDataFromItems:(id)arg1;
- (id)radioWords;
- (id)searchEventValues;
- (void)setAppNames:(id)arg1;
- (void)setContactWordsWithFrequency:(id)arg1;
- (void)setCorrections:(id)arg1;
- (void)setEventLocationNames:(id)arg1;
- (void)setEventTitles:(id)arg1;
- (void)setInteractionSenderDisplayNames:(id)arg1;
- (void)setKeyboardLMDynamicVocabularyItems:(id)arg1;
- (void)setLocationOfInterestNames:(id)arg1;
- (void)setPexNamedEntityNames:(id)arg1;
- (void)setRadioWords:(id)arg1;
- (void)setSearchEventValues:(id)arg1;
- (void)setSpatialLocationOfInterestNames:(id)arg1;
- (void)setUaapWords:(id)arg1;
- (void)setVocabularyWords:(id)arg1;
- (id)spatialLocationOfInterestNames;
- (id)uaapWords;
- (id)vocabularyWords;

@end
