
@interface MUIContactSuggestion : MUISearchAtomSuggestion {
    NSArray * _attributeValues;
    MUISearchSuggestionCategory * _category;
    NSArray * _contactEmailAddresses;
    NSString * _contactIdentifier;
    CSSuggestion * _spotlightSuggestion;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *attributeValues;
@property (nonatomic, readonly) NSArray *contactEmailAddresses;
@property (nonatomic, readonly) NSString *contactIdentifier;

+ (id)suggestionWithTitle:(id)arg1 contactEmailAddresses:(id)arg2 contactIdentifier:(id)arg3 spotlightSuggestion:(id)arg4;

- (void).cxx_destruct;
- (id)attributeValues;
- (id)category;
- (id)contactEmailAddresses;
- (id)contactIdentifier;
- (id)initWithTitle:(id)arg1 contactEmailAddresses:(id)arg2 contactIdentifier:(id)arg3 spotlightSuggestion:(id)arg4;
- (id)spotlightSuggestion;
- (id)subtitle;
- (id)title;

@end
