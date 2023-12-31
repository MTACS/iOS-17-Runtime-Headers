
@protocol INSpeakable <NSObject>

@required

- (NSArray *)alternativeSpeakableMatches;
- (NSString *)pronunciationHint;
- (NSString *)spokenPhrase;
- (NSString *)vocabularyIdentifier;

@optional

- (NSString *)identifier;

@end
