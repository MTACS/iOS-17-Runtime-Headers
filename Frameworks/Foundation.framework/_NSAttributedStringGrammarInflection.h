
@interface _NSAttributedStringGrammarInflection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    long long  _context;
    long long  _determinationType;
    NSMorphologyCustomPronoun * _englishCustomPronoun;
    long long  _gender;
    long long  _grammaticalCase;
    long long  _number;
    long long  _person;
}

@property long long context;
@property long long determinationType;
@property (nonatomic, copy) NSMorphologyCustomPronoun *englishCustomPronoun;
@property (readonly) NSData *externalRepresentation;
@property (readonly) NSDictionary *externalRepresentationDictionary;
@property long long gender;
@property long long grammaticalCase;
@property (getter=isIdentity, nonatomic, readonly) bool identity;
@property (readonly) NSString *localizedShortDescription;
@property long long number;
@property long long person;

+ (void)_addGlobalUserInflectionObserver:(id)arg1 options:(unsigned long long)arg2 context:(void*)arg3;
+ (bool)_canSelectUserInflectionWithPreferredLanguages:(id)arg1;
+ (id)_currentGlobalUserInflection;
+ (id)_currentGlobalUserInflectionIfAvailable;
+ (bool)_isSimulatingLockedDevice;
+ (bool)_isSimulatingThirdPartyProcess;
+ (id)_protectedPreferencesDomain;
+ (void)_removeGlobalUserInflectionObserver:(id)arg1 context:(void*)arg2;
+ (void)_setThirdPartyApplicationsCanAccessUserInflection:(bool)arg1;
+ (bool)_thirdPartyApplicationsCanAccessUserInflection;
+ (id)_thirdPartyPreferencesDomain;
+ (void)_usePreferencesDomainForFirstParty:(id)arg1 thirdParty:(id)arg2 simulateLockedDevice:(bool)arg3 simulateThirdPartyProcess:(bool)arg4 withinBlock:(id /* block */)arg5;
+ (bool)canSelectCustomInflection;
+ (bool)canSelectUserInflection;
+ (id)presetInflections;
+ (bool)supportsSecureCoding;
+ (id)userInflection;

- (void)_beginUsingInsteadOfUserInflection;
- (void)_editByAddingWordAttributes:(struct { long long x1; long long x2; long long x3; long long x4; unsigned long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; long long x19; bool x20; bool x21; bool x22; })arg1 overrideIfAlreadySet:(bool)arg2;
- (void)_editByApplyingPluralityRulesForNumbers:(id)arg1 inLanguages:(id)arg2;
- (void)_endUsingInsteadOfUserInflection;
- (id)_initWithGender:(long long)arg1;
- (id)_initWithMarkdownDictionary:(id)arg1;
- (id)_markupDictionary;
- (void)_setAsGlobalUserInflection;
- (void)_useInsteadOfUserInflectionInBlock:(id /* block */)arg1;
- (long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)determinationType;
- (void)encodeWithCoder:(id)arg1;
- (id)englishCustomPronoun;
- (id)externalRepresentation;
- (id)externalRepresentationDictionary;
- (long long)gender;
- (long long)grammaticalCase;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithExternalRepresentationDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithInflectionRule:(id)arg1;
- (id)initWithMorphology:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIdentity;
- (id)localizedShortDescription;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)number;
- (long long)person;
- (void)setContext:(long long)arg1;
- (void)setDeterminationType:(long long)arg1;
- (void)setEnglishCustomPronoun:(id)arg1;
- (void)setGender:(long long)arg1;
- (void)setGrammaticalCase:(long long)arg1;
- (void)setNumber:(long long)arg1;
- (void)setPerson:(long long)arg1;

@end
