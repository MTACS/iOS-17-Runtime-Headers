
@interface PNPersonSuggester : NSObject

+ (bool)_isMePersonWithLocalIdentifier:(id)arg1 inPhotoLibrary:(id)arg2 error:(id*)arg3;
+ (void)_logIntelligencePlatformUserFeedback:(long long)arg1 forSuggestion:(id)arg2;
+ (id)_logger;
+ (id)_meContactIdentifierWithError:(id*)arg1;
+ (id)fetchAutonamingSuggestionForPerson:(id)arg1 checkIsMe:(bool)arg2 withError:(id*)arg3;
+ (void)logUserFeedback:(long long)arg1 forSuggestion:(id)arg2;

@end
