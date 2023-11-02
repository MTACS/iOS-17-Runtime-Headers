
@protocol CNContactsLoggerProvider <NSObject>

@required

- (<CNAPITriageLogger> *)apiTriageLogger;
- (<CNContactsLogger> *)contactsLogger;
- (<CNFavoritesLogger> *)favoritesLogger;
- (<CNGeminiLogger> *)geminiLogger;
- (<CNImageUtilitiesLogger> *)imageUtilitiesLogger;
- (<CNRegulatoryLogger> *)regulatoryLogger;
- (<CNSpotlightIndexingLogger> *)spotlightIndexingLogger;

@end
