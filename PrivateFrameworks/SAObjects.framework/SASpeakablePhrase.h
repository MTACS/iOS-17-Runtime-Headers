
@interface SASpeakablePhrase : SADomainObject

@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *pronunciation;

+ (id)speakablePhrase;
+ (id)speakablePhraseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)phrase;
- (id)pronunciation;
- (void)setPhrase:(id)arg1;
- (void)setPronunciation:(id)arg1;

@end
