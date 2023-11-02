
@interface MUISearchSuggestionPhraseManager : NSObject {
    NSDictionary * _customFlags;
    NSArray * _excludedMailboxes;
    long long  _feedbackQueryID;
    NSString * _filterQuery;
    NSArray * _implicitSuggestions;
    NSArray * _inputLanguages;
    NSString * _phrase;
    NSString * _scopeIdentifierForPeopleSuggestions;
    NSArray * _selectedSuggestions;
    unsigned long long  _signpostID;
    CSSuggestion * _updatedSuggestion;
    <EMVIPManager> * _vipManager;
}

@property (nonatomic, readonly, copy) NSDictionary *customFlags;
@property (nonatomic, readonly, copy) NSArray *excludedMailboxes;
@property (nonatomic, readonly) long long feedbackQueryID;
@property (nonatomic, readonly, copy) NSString *filterQuery;
@property (nonatomic, readonly) bool hasPhraseOrSuggestions;
@property (nonatomic, readonly, copy) NSArray *implicitSuggestions;
@property (nonatomic, readonly, copy) NSArray *inputLanguages;
@property (nonatomic, readonly, copy) NSString *phrase;
@property (nonatomic, readonly) unsigned char phraseKind;
@property (nonatomic, readonly, copy) NSString *scopeIdentifierForPeopleSuggestions;
@property (nonatomic, readonly, copy) NSArray *selectedSuggestions;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (nonatomic, readonly) CSSuggestion *updatedSuggestion;
@property (nonatomic, readonly) <EMVIPManager> *vipManager;

+ (id)phraseManagerWithPhrase:(id)arg1 updatedSuggestion:(id)arg2 filterQuery:(id)arg3 inputLanguages:(id)arg4 customFlags:(id)arg5 feedbackQueryID:(long long)arg6;

- (void).cxx_destruct;
- (id)customFlags;
- (id)excludedMailboxes;
- (long long)feedbackQueryID;
- (id)filterQuery;
- (bool)hasPhraseOrSuggestions;
- (id)implicitSuggestions;
- (id)initWithPhrase:(id)arg1 selectedSuggestions:(id)arg2 vipManager:(id)arg3 updatedSuggestion:(id)arg4 scopeIdentifierForPeopleSuggestions:(id)arg5 inputLanguages:(id)arg6 implicitSuggestions:(id)arg7 filterQuery:(id)arg8 excludedMailboxes:(id)arg9 customFlags:(id)arg10 feedbackQueryID:(long long)arg11;
- (id)inputLanguages;
- (id)phrase;
- (unsigned char)phraseKind;
- (id)scopeIdentifierForPeopleSuggestions;
- (id)selectedSuggestions;
- (unsigned long long)signpostID;
- (id)spotlightQueryStrings;
- (id)updatedSuggestion;
- (id)vipManager;

@end
