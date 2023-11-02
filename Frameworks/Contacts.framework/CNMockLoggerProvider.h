
@interface CNMockLoggerProvider : NSObject <CNContactsLoggerProvider> {
    <CNAPITriageLogger> * _apiTriageLogger;
    <CNContactsLogger> * _contactsLogger;
    <CNFavoritesLogger> * _favoritesLogger;
    <CNGeminiLogger> * _geminiLogger;
    <CNImageUtilitiesLogger> * _imageUtilitiesLogger;
    <CNRegulatoryLogger> * _regulatoryLogger;
    <CNSpotlightIndexingLogger> * _spotlightIndexingLogger;
}

@property (nonatomic, retain) <CNAPITriageLogger> *apiTriageLogger;
@property (nonatomic, retain) <CNContactsLogger> *contactsLogger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CNFavoritesLogger> *favoritesLogger;
@property (nonatomic, retain) <CNGeminiLogger> *geminiLogger;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNImageUtilitiesLogger> *imageUtilitiesLogger;
@property (nonatomic, retain) <CNRegulatoryLogger> *regulatoryLogger;
@property (nonatomic, retain) <CNSpotlightIndexingLogger> *spotlightIndexingLogger;
@property (readonly) Class superclass;

+ (id)loggerProvider;

- (void).cxx_destruct;
- (id)apiTriageLogger;
- (id)contactsLogger;
- (id)favoritesLogger;
- (id)geminiLogger;
- (id)imageUtilitiesLogger;
- (id)regulatoryLogger;
- (void)setApiTriageLogger:(id)arg1;
- (void)setContactsLogger:(id)arg1;
- (void)setFavoritesLogger:(id)arg1;
- (void)setGeminiLogger:(id)arg1;
- (void)setImageUtilitiesLogger:(id)arg1;
- (void)setRegulatoryLogger:(id)arg1;
- (void)setSpotlightIndexingLogger:(id)arg1;
- (id)spotlightIndexingLogger;

@end
