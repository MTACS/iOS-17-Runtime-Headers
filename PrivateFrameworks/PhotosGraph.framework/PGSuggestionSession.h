
@interface PGSuggestionSession : NSObject {
    NSArray * _collidableMemories;
    CLSCurationContext * _curationContext;
    NSArray * _deniedSuggestions;
    NSArray * _existingSuggestions;
    NSSet * _forbiddenAssetUUIDs;
    NSObject<OS_os_log> * _loggingConnection;
    PGSuggestionNotificationProfile * _notificationProfile;
    unsigned char  _profile;
    NSDate * _universalToday;
    PGManagerWorkingContext * _workingContext;
}

@property (nonatomic, retain) NSArray *collidableMemories;
@property (nonatomic, readonly) CLSCurationContext *curationContext;
@property (nonatomic, retain) NSArray *deniedSuggestions;
@property (nonatomic, retain) NSArray *existingSuggestions;
@property (nonatomic, retain) NSSet *forbiddenAssetUUIDs;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic, readonly) PGSuggestionNotificationProfile *notificationProfile;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned char profile;
@property (nonatomic, readonly) PGManagerWorkingContext *workingContext;

+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1;
+ (id)suggesterClassesWithProfile:(unsigned char)arg1;
+ (id)suggestionSubtypesWithProfile:(unsigned char)arg1;
+ (id)suggestionTypesWithProfile:(unsigned char)arg1;

- (void).cxx_destruct;
- (bool)_suggestionIsColliding:(id)arg1 relaxCollisionRules:(bool)arg2;
- (id)activeSuggestersWithOptions:(id)arg1;
- (id)anySuggestionCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(bool)arg3 collisionReason:(unsigned long long*)arg4;
- (id)bestSuggestionBetween:(id)arg1 and:(id)arg2;
- (id)collidableMemories;
- (id)coordinatedSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)curationContext;
- (unsigned long long)deniedSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2;
- (id)deniedSuggestions;
- (id)electedSuggestionsFromSuggestions:(id)arg1 options:(id)arg2 progress:(id /* block */)arg3;
- (id)existingSuggestions;
- (id)existingSuggestionsWithState:(unsigned short)arg1 count:(unsigned long long)arg2;
- (id)forbiddenAssetUUIDs;
- (id)infoWithSuggestion:(id)arg1;
- (id)infosWithSuggestions:(id)arg1;
- (id)initWithProfile:(unsigned char)arg1 workingContext:(id)arg2;
- (id)loggingConnection;
- (id)notificationProfile;
- (unsigned long long)outstanderSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 relaxCollisionRules:(bool)arg3;
- (id)photoLibrary;
- (unsigned char)profile;
- (unsigned long long)reasonForSuggestion:(id)arg1 collidingWithSuggestion:(id)arg2 relaxCollisionRules:(bool)arg3;
- (void)setCollidableMemories:(id)arg1;
- (void)setDeniedSuggestions:(id)arg1;
- (void)setExistingSuggestions:(id)arg1;
- (void)setForbiddenAssetUUIDs:(id)arg1;
- (unsigned long long)singleAssetSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2;
- (bool)suggesterClass:(Class)arg1 supportsOptions:(id)arg2;
- (id)suggesterClasses;
- (bool)suggestion:(id)arg1 collidesWithMemories:(id)arg2;
- (bool)suggestion:(id)arg1 isEqualToSuggestion:(id)arg2;
- (id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(bool)arg3;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (bool)supportsRelaxedCollisionRulesForSuggester:(id)arg1;
- (id)uncoordinatedSuggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;
- (id)workingContext;

@end
