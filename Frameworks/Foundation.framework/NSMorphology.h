
@interface NSMorphology : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _customPronouns;
    long long  _definiteness;
    long long  _determination;
    long long  _grammaticalCase;
    long long  _grammaticalGender;
    long long  _grammaticalPerson;
    long long  _number;
    long long  _partOfSpeech;
    long long  _pronounType;
}

@property (getter=_customPronouns, readonly) NSDictionary *_customPronouns;
@property (setter=_setCustomPronouns:, copy) NSDictionary *_customPronouns;
@property (nonatomic, readonly) NSData *_externalRepresentation;
@property (nonatomic, readonly) NSDictionary *_externalRepresentationDictionary;
@property (nonatomic) long long definiteness;
@property (nonatomic) long long determination;
@property (nonatomic) long long grammaticalCase;
@property (nonatomic) long long grammaticalGender;
@property (nonatomic) long long grammaticalPerson;
@property (nonatomic) long long number;
@property (nonatomic) long long partOfSpeech;
@property (nonatomic) long long pronounType;
@property (getter=isUnspecified, readonly) bool unspecified;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_clearCachedUserMorphology;
+ (void)_getUserMorphology:(id*)arg1 userInflection:(id*)arg2;
+ (id)_heuristicMorphologyForLanguage:(id)arg1 prefix:(id)arg2 suffix:(id)arg3 featureName:(id*)arg4 matchedPrefix:(bool*)arg5 matchedSuffix:(bool*)arg6;
+ (bool)supportsSecureCoding;
+ (id)userMorphology;

- (id)_customPronouns;
- (id)_externalRepresentation;
- (id)_externalRepresentationDictionary;
- (id)_initWithExternalRepresentation:(id)arg1 error:(out id*)arg2;
- (id)_initWithExternalRepresentationDictionary:(id)arg1;
- (id)_morphunConstraints;
- (void)_setCustomPronouns:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPronounForLanguage:(id)arg1;
- (void)dealloc;
- (long long)definiteness;
- (id)description;
- (long long)determination;
- (void)encodeWithCoder:(id)arg1;
- (long long)grammaticalCase;
- (long long)grammaticalGender;
- (long long)grammaticalPerson;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInflection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUnspecified;
- (long long)number;
- (long long)partOfSpeech;
- (long long)pronounType;
- (bool)setCustomPronoun:(id)arg1 forLanguage:(id)arg2 error:(id*)arg3;
- (void)setDefiniteness:(long long)arg1;
- (void)setDetermination:(long long)arg1;
- (void)setGrammaticalCase:(long long)arg1;
- (void)setGrammaticalGender:(long long)arg1;
- (void)setGrammaticalPerson:(long long)arg1;
- (void)setNumber:(long long)arg1;
- (void)setPartOfSpeech:(long long)arg1;
- (void)setPronounType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/IntlPreferencesUI.framework/IntlPreferencesUI

+ (id)morphologyWithCase:(long long)arg1 determination:(long long)arg2;

@end
