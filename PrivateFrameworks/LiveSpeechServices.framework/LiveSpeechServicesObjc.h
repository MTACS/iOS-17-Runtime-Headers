
@interface LiveSpeechServicesObjc : NSObject

+ (void)addFavoritePhrase:(id)arg1;
+ (id)favoritePhrases;
+ (id)observeFavoritePhrasesChanges:(id /* block */)arg1;
+ (id)phraseShortcutKey;
+ (id)phraseTextKey;
+ (void)removeFavoritePhrase:(id)arg1;
+ (void)startLiveSpeechAndReturnError:(id*)arg1;
+ (void)stopLiveSpeechAndReturnError:(id*)arg1;

@end
