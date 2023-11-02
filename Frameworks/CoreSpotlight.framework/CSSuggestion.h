
@interface CSSuggestion : NSObject <NSCopying, NSSecureCoding> {
    _CSSuggestionToken * _currentSuggestionToken;
    NSString * _displayString;
    bool  _enableFragments;
    CSInstantAnswers * _instantAnswer;
    NSAttributedString * _localizedAttributedString;
    NSArray * _previousSuggestionTokens;
    long long  _rank;
    long long  _resultCount;
    NSString * _searchString;
    NSArray * _suggestionTokens;
    bool  _updated;
    NSArray * _updatedSuggestionTokens;
    NSString * _userQueryString;
    long long  _version;
}

@property (nonatomic, readonly) NSData *features;
@property (nonatomic, readonly) NSAttributedString *localizedAttributedSuggestion;
@property (nonatomic, readonly) bool mui_isEmpty;
@property (nonatomic, readonly) NSData *mui_serializedSpotlightSuggestionRepresentation;
@property (nonatomic) long long rank;
@property (nonatomic, readonly) NSDictionary *rankCategories;
@property (nonatomic, readonly) long long suggestionKind;
@property (nonatomic) long long version;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

+ (id)advancedSuggestionWithUserString:(id)arg1 currentSuggestion:(id)arg2 parseResult:(id)arg3;
+ (id)attachmentNameSuggestionWithUserString:(id)arg1 currentSuggestion:(id)arg2;
+ (id)emptySuggestion;
+ (id)instantAnswerWithUserString:(id)arg1 currentSuggestion:(id)arg2 itemResult:(id)arg3;
+ (id)messageWithAttachmentsSuggestionWithUserString:(id)arg1 currentSuggestion:(id)arg2;
+ (id)noreplyTemplates;
+ (id)senderContainsSuggestionWithUserString:(id)arg1 currentSuggestion:(id)arg2;
+ (id)subjectSuggestionWithUserString:(id)arg1 currentSuggestion:(id)arg2;
+ (id)suggestionWithCurrentSuggestion:(id)arg1 userQueryString:(id)arg2 completion:(id)arg3 attributes:(id)arg4 scores:(id)arg5 options:(id)arg6;
+ (id)suggestionWithCurrentSuggestion:(id)arg1 userQueryString:(id)arg2 parseResult:(id)arg3;
+ (id)suggestionWithUserString:(id)arg1;
+ (id)suggestionWithUserString:(id)arg1 currentSuggestion:(id)arg2;
+ (id)suggestionWithUserString:(id)arg1 currentSuggestion:(id)arg2 updatedSuggestionTokens:(id)arg3;
+ (id)suggestionsWithCurrentSuggestion:(id)arg1 userQueryString:(id)arg2 completionData:(id)arg3 options:(id)arg4;
+ (id)suggestionsWithCurrentSuggestion:(id)arg1 userQueryString:(id)arg2 suggestionData:(id)arg3 options:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)arg1 highlightedText:(id)arg2;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)arg1 highlightedText:(id)arg2 highlightedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)arg1 interaction:(int)arg2;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)arg1 mailboxKind:(long long)arg2;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)arg1 token:(id)arg2 scopeSelection:(unsigned long long)arg3;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)arg1 token:(id)arg2 tokenText:(id)arg3;
+ (id)updatedSuggestionWithCurrentSuggestion:(id)arg1 userString:(id)arg2 tokens:(id)arg3;

- (void).cxx_destruct;
- (id)addSuggestionHighlight:(id)arg1 withDisplayText:(id)arg2;
- (void)commonInitWithUserString:(id)arg1 currentSuggestion:(id)arg2 currentSuggestionToken:(id)arg3 updatedSuggestionTokens:(id)arg4;
- (void)commonInitWithUserString:(id)arg1 currentSuggestionToken:(id)arg2 previousSuggestionTokens:(id)arg3 updatedSuggestionTokens:(id)arg4 enableFragments:(bool)arg5;
- (long long)compare:(id)arg1;
- (long long)compareByRank:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentSuggestionToken;
- (id)currentToken;
- (id)currentTokens;
- (id)debugDescription;
- (id)description;
- (id)displayString;
- (id)displayTextForPeopleSuggestion:(id)arg1;
- (bool)enableFragments;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (bool)hasAttachmentsRelatedSearchString;
- (bool)hasSuggestionTokenWithType:(long long)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 currentSuggestionToken:(id)arg3;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 currentToken:(id)arg3 tokens:(id)arg4;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 displayString:(id)arg3 attributeValues:(id)arg4 attributeStrings:(id)arg5 options:(id)arg6;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 displayString:(id)arg3 score:(id)arg4;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 internalType:(long long)arg3;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 itemResult:(id)arg3;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 suggestionResult:(id)arg3;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 suggestionTokenResult:(id)arg3;
- (id)initWithUserString:(id)arg1 currentSuggestion:(id)arg2 updatedSuggestionTokens:(id)arg3;
- (id)initWithUserString:(id)arg1 previousSuggestionTokens:(id)arg2 displayString:(id)arg3 attributeValues:(id)arg4 attributeStrings:(id)arg5 enableFragements:(bool)arg6 options:(id)arg7;
- (id)instantAnswer;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSuggestion:(id)arg1;
- (id)localizedAttributedSuggestion;
- (void)mergeSuggestionAndUpdateLocalizedAttributedString:(id)arg1;
- (long long)numberOfMessageWithAttachmentTokens;
- (id)personSuggestionByReplacingCurrentTokenEmailAddresses:(id)arg1;
- (id)previousSuggestionTokens;
- (id)queryString;
- (long long)rank;
- (id)rankCategories;
- (long long)resultCount;
- (id)score;
- (id)searchString;
- (id)searchStringByRemovingPrefixForScopeKey:(id)arg1;
- (void)setEnableFragments:(bool)arg1;
- (void)setInstantAnswer:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setResultCount:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (id)suggestionDataSources;
- (long long)suggestionKind;
- (id)suggestionTokens;
- (id)uniqueIdentifier;
- (void)update;
- (void)updateCurrentSuggestionToken:(id)arg1;
- (void)updateDisplayString:(id)arg1;
- (void)updateLocalizedAttributedString:(id)arg1;
- (void)updateLocalizedAttributedStringForPersonSuggestion;
- (void)updatePreviousSuggestionTokens:(id)arg1;
- (void)updateResultCount:(long long)arg1;
- (void)updateSearchString:(id)arg1;
- (void)updateSuggestFragments:(bool)arg1;
- (void)updateSuggestionTokens:(id)arg1;
- (void)updateUpdatedFlag:(bool)arg1;
- (void)updateUpdatedSuggestionTokens:(id)arg1;
- (void)updateUserQueryString:(id)arg1;
- (void)updateVersion:(long long)arg1;
- (id)userQueryString;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (id)mui_emptySuggestion;
+ (id)mui_log;
+ (id)mui_mergeCurrentSuggestion:(id)arg1 suggestion:(id)arg2;
+ (id)mui_spotlightSuggestionForEmailAddress:(id)arg1 scope:(long long)arg2 currentSuggestion:(id)arg3;
+ (id)mui_spotlightSuggestionFromSerializedRepresentation:(id)arg1;

- (bool)mui_isEmpty;
- (id)mui_serializedSpotlightSuggestionRepresentation;

@end
