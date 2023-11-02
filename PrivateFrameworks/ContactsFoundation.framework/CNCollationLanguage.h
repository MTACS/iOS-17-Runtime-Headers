
@interface CNCollationLanguage : NSObject {
    NSString * _firstCharacterAfterLanguage;
    NSString * _lastCharacter;
    NSArray * _sections;
}

@property (readonly) NSString *firstCharacterAfterLanguage;
@property (readonly) NSString *lastCharacter;
@property (readonly) NSArray *sections;

- (void).cxx_destruct;
- (id)firstCharacterAfterLanguage;
- (id)initWithSections:(id)arg1 lastCharacter:(id)arg2 firstCharacterAfterLanguage:(id)arg3;
- (id)lastCharacter;
- (id)sections;

@end
