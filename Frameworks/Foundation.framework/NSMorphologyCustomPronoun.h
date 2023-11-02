
@interface NSMorphologyCustomPronoun : NSObject <NSCopying, NSSecureCoding> {
    NSString * _objectForm;
    NSString * _possessiveAdjectiveForm;
    NSString * _possessiveForm;
    NSString * _reflexiveForm;
    NSString * _subjectForm;
}

@property (nonatomic, readonly) NSDictionary *_externalRepresentationDictionary;
@property (nonatomic, copy) NSString *objectForm;
@property (nonatomic, copy) NSString *possessiveAdjectiveForm;
@property (nonatomic, copy) NSString *possessiveForm;
@property (nonatomic, copy) NSString *reflexiveForm;
@property (nonatomic, copy) NSString *subjectForm;

+ (bool)_validateCustomPronounWithAccessor:(id /* block */)arg1 forLanguage:(id)arg2 error:(id*)arg3;
+ (bool)isSupportedForLanguage:(id)arg1;
+ (id)requiredKeysForLanguage:(id)arg1;
+ (bool)supportsSecureCoding;

- (bool)_autocompleteEnglishPronounFromSubjectForm;
- (id)_externalRepresentation;
- (id)_externalRepresentationDictionary;
- (id)_initWithExternalRepresentationDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForm;
- (id)possessiveAdjectiveForm;
- (id)possessiveForm;
- (id)reflexiveForm;
- (void)setObjectForm:(id)arg1;
- (void)setPossessiveAdjectiveForm:(id)arg1;
- (void)setPossessiveForm:(id)arg1;
- (void)setReflexiveForm:(id)arg1;
- (void)setSubjectForm:(id)arg1;
- (id)subjectForm;

@end
