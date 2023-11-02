
@interface _LTTranslationGenderAlternative : NSObject <NSSecureCoding> {
    NSString * _defaultGender;
    NSNumber * _group;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _sourceRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _targetRange;
}

@property (nonatomic, retain) NSString *defaultGender;
@property (nonatomic, copy) NSNumber *group;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } sourceRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } targetRange;

+ (id)genderAlternativeFromDictionary:(id)arg1 withGroup:(id)arg2;
+ (id)genderAlternativesFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultGender;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)initWithCoder:(id)arg1;
- (void)setDefaultGender:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTargetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sourceRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })targetRange;

@end
