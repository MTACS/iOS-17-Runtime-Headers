
@interface NSTermOfAddress : NSObject <NSCopying, NSSecureCoding> {
    long long  _gender;
    NSString * _language;
    NSArray * _pronouns;
}

@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) bool isUnspecified;
@property (readonly, copy) NSString *languageIdentifier;
@property (nonatomic, readonly) NSString *localizedLanguageDescription;
@property (nonatomic, readonly) NSString *localizedShortDescription;
@property (readonly, copy) NSArray *pronouns;
@property (nonatomic, readonly) NSString *stringRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)feminine;
+ (id)localizedForLanguageIdentifier:(id)arg1 withPronouns:(id)arg2;
+ (id)masculine;
+ (id)neutral;
+ (bool)supportsSecureCoding;

- (bool)_containsPronoun:(id)arg1 withGrammemes:(id)arg2;
- (id)_initWithGender:(long long)arg1;
- (id)_initWithPronouns:(id)arg1 forLanguage:(id)arg2;
- (bool)_isSupportedInLanguage:(id)arg1;
- (id)_morphologyForLanguage:(id)arg1;
- (id)_withExtrapolatedPronouns;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageIdentifier;
- (id)pronouns;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)empty;
+ (id)localizedDescriptionForAddressingGrammars:(id)arg1;
+ (id)localizedDescriptionForAddressingGrammars:(id)arg1 uppercased:(bool)arg2;
+ (id)os_log;
+ (id)pronounDescriptionsForAddressingGrammars:(id)arg1 uppercased:(bool)arg2;
+ (id)termOfAddressFromDataRepresentation:(id)arg1;
+ (id)termOfAddressFromStringRepresentation:(id)arg1;
+ (id)unspecified;

- (id)dataRepresentation;
- (bool)isUnspecified;
- (id)locale;
- (id)localizedLanguageDescription;
- (id)localizedShortDescription;
- (id)pronounDescriptions;
- (id)stringRepresentation;

@end
