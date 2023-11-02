
@interface CNContactsLoggerProvider : NSObject <CNContactsLoggerProvider> {
    <CNAPITriageLogger> * _apiTriageLogger;
    <CNContactsLogger> * _contactsLogger;
    <CNFavoritesLogger> * _favoritesLogger;
    <CNGeminiLogger> * _geminiLogger;
    <CNImageUtilitiesLogger> * _imageUtilitiesLogger;
    <CNRegulatoryLogger> * _regulatoryLogger;
    <CNSpotlightIndexingLogger> * _spotlightIndexingLogger;
}

@property (nonatomic, readonly) <CNAPITriageLogger> *apiTriageLogger;
@property (nonatomic, readonly) <CNContactsLogger> *contactsLogger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNFavoritesLogger> *favoritesLogger;
@property (nonatomic, readonly) <CNGeminiLogger> *geminiLogger;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNImageUtilitiesLogger> *imageUtilitiesLogger;
@property (nonatomic, readonly) <CNRegulatoryLogger> *regulatoryLogger;
@property (nonatomic, readonly) <CNSpotlightIndexingLogger> *spotlightIndexingLogger;
@property (readonly) Class superclass;

+ (id)defaultProvider;

- (void).cxx_destruct;
- (id)apiTriageLogger;
- (id)contactsLogger;
- (id)favoritesLogger;
- (id)geminiLogger;
- (id)imageUtilitiesLogger;
- (id)regulatoryLogger;
- (id)spotlightIndexingLogger;

@end
