
@interface _NSAttributedStringGrammar : NSObject <NSCopying, NSMutableCopying> {
    long long  _aspect;
    long long  _deictic;
    long long  _determinationType;
    long long  _gender;
    long long  _grammaticalCase;
    long long  _mood;
    long long  _number;
    long long  _person;
    long long  _position;
    long long  _tense;
    long long  _verbForm;
}

@property (getter=_wordAttributes, readonly) struct { long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; bool x20; bool x21; bool x22; } _wordAttributes;
@property long long aspect;
@property long long deictic;
@property long long determinationType;
@property long long gender;
@property long long grammaticalCase;
@property long long mood;
@property long long number;
@property long long person;
@property long long position;
@property long long tense;
@property long long verbForm;

+ (id)identityGrammar;

- (id)_initWithMarkdownDictionary:(id)arg1;
- (struct { long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; bool x20; bool x21; bool x22; })_wordAttributes;
- (long long)aspect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deictic;
- (long long)determinationType;
- (long long)gender;
- (long long)grammaticalCase;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMorphology:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mood;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)number;
- (long long)person;
- (long long)position;
- (void)setAspect:(long long)arg1;
- (void)setDeictic:(long long)arg1;
- (void)setDeterminationType:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setGrammaticalCase:(long long)arg1;
- (void)setMood:(long long)arg1;
- (void)setNumber:(long long)arg1;
- (void)setPerson:(long long)arg1;
- (void)setPosition:(long long)arg1;
- (void)setTense:(long long)arg1;
- (void)setVerbForm:(long long)arg1;
- (long long)tense;
- (long long)verbForm;

@end
