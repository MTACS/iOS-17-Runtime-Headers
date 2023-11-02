
@interface CNContactFormatter : NSFormatter <NSSecureCoding> {
    bool  _emphasizesPrimaryNameComponent;
    unsigned long long  _fallbackStyle;
    bool  _ignoresNickname;
    bool  _ignoresOrganization;
    NSPersonNameComponentsFormatter * _nameFormatter;
    long long  _sortOrder;
    long long  _style;
}

@property (nonatomic) bool emphasizesPrimaryNameComponent;
@property (nonatomic) unsigned long long fallbackStyle;
@property (nonatomic) bool ignoresNickname;
@property (nonatomic) bool ignoresOrganization;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long style;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)abbreviatedStringFromContact:(id)arg1 trimmingWhitespace:(bool)arg2;
+ (id)attributedStringFromContact:(id)arg1 style:(long long)arg2 defaultAttributes:(id)arg3;
+ (id)delimiterForContact:(id)arg1;
+ (id)descriptorForRequiredKeysForDelimiter;
+ (id)descriptorForRequiredKeysForNameOrder;
+ (id)descriptorForRequiredKeysForStyle:(long long)arg1;
+ (long long)nameEmphasisStyleForContact:(id)arg1;
+ (long long)nameEmphasisStyleForContact:(id)arg1 localeBasedEmphasisStyle:(long long)arg2 preferNickname:(bool)arg3;
+ (long long)nameOrderForContact:(id)arg1;
+ (id)posterNameComponentsForContact:(id)arg1;
+ (id)posterNameComponentsForContact:(id)arg1 nameOrder:(long long)arg2 localeEmphasisStyle:(long long)arg3 preferNicknames:(bool)arg4;
+ (long long)singleNameStyleForContact:(id)arg1;
+ (id)stringFromContact:(id)arg1 style:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)attributedStringFromContact:(id)arg1 defaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptorForRequiredKeys;
- (bool)emphasizesPrimaryNameComponent;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fallbackStyle;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)ignoresNickname;
- (bool)ignoresOrganization;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setEmphasizesPrimaryNameComponent:(bool)arg1;
- (void)setFallbackStyle:(unsigned long long)arg1;
- (void)setIgnoresNickname:(bool)arg1;
- (void)setIgnoresOrganization:(bool)arg1;
- (void)setSortOrder:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (long long)sortOrder;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromContact:(id)arg1;
- (id)stringFromContact:(id)arg1 attributes:(id)arg2;
- (id)stringFromPotentiallySuggestedContact:(id)arg1 relatedToProperty:(id)arg2;
- (long long)style;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)sharedFullNameFormatter;
+ (id)sharedFullNameFormatterWithFallBacks;

- (id)stringFromGroupIdentity:(id)arg1;

@end
