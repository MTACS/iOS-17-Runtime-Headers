
@interface PNPersonSuggestion : NSObject {
    long long  _attribution;
    NSString * _contactIdentifier;
    bool  _isMe;
    NSPersonNameComponents * _nameComponents;
    NSString * _nameString;
    NSString * _personLocalIdentifier;
    long long  _suggestionSource;
}

@property (nonatomic) long long attribution;
@property (nonatomic, readonly) NSString *autonamingFeedbackStandardNameRepresentation;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic) bool isMe;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *nameString;
@property (nonatomic, copy) NSString *personLocalIdentifier;
@property (nonatomic) long long suggestionSource;

+ (id)suggestionWithPersonLocalIdentifier:(id)arg1 meContactIdentifier:(id)arg2;
+ (id)suggestionWithPersonLocalIdentifier:(id)arg1 personView:(id)arg2;

- (void).cxx_destruct;
- (long long)attribution;
- (id)autonamingFeedbackStandardNameRepresentation;
- (id)contactIdentifier;
- (id)description;
- (bool)isMe;
- (id)nameComponents;
- (id)nameString;
- (id)personLocalIdentifier;
- (void)setAttribution:(long long)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setNameString:(id)arg1;
- (void)setPersonLocalIdentifier:(id)arg1;
- (void)setSuggestionSource:(long long)arg1;
- (long long)suggestionSource;

@end
