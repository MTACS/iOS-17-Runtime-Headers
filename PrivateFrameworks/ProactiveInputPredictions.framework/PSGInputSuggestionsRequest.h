
@interface PSGInputSuggestionsRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _adaptationContextID;
    NSSet * _availableApps;
    NSString * _bundleIdentifier;
    NSString * _contextAfterInput;
    NSString * _contextBeforeInput;
    NSArray * _conversationTurns;
    NSString * _initiatingProcess;
    bool  _isDocumentEmpty;
    bool  _isResponseContextBlacklisted;
    NSString * _localeIdentifier;
    NSString * _markedText;
    NSSet * _recipientNames;
    NSArray * _recipients;
    NSString * _responseContext;
    NSArray * _responseKitConversationTurns;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRangeInMarkedText;
    NSString * _selectedText;
    bool  _shouldDisableAutoCaps;
    unsigned long long  _structuredInfoLimit;
    NSString * _textContentType;
    unsigned long long  _textualResponseLimit;
    unsigned long long  _totalSuggestionsLimit;
}

@property (nonatomic, readonly) NSString *adaptationContextID;
@property (nonatomic, readonly) NSSet *availableApps;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *contextAfterInput;
@property (nonatomic, readonly) NSString *contextBeforeInput;
@property (nonatomic, readonly) NSArray *conversationTurns;
@property (nonatomic, readonly) NSString *initiatingProcess;
@property (nonatomic, readonly) bool isDocumentEmpty;
@property (nonatomic, readonly) bool isResponseContextBlacklisted;
@property (nonatomic, readonly) NSString *localeIdentifier;
@property (nonatomic, readonly) NSString *markedText;
@property (nonatomic, readonly) NSSet *recipientNames;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) NSString *responseContext;
@property (nonatomic, readonly) NSArray *responseKitConversationTurns;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRangeInMarkedText;
@property (nonatomic, readonly) NSString *selectedText;
@property (nonatomic, readonly) bool shouldDisableAutoCaps;
@property (nonatomic, readonly) unsigned long long structuredInfoLimit;
@property (nonatomic, readonly) NSString *textContentType;
@property (nonatomic, readonly) unsigned long long textualResponseLimit;
@property (nonatomic, readonly) unsigned long long totalSuggestionsLimit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adaptationContextID;
- (id)availableApps;
- (id)bundleIdentifier;
- (id)contextAfterInput;
- (id)contextBeforeInput;
- (id)conversationTurns;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 adaptationContextID:(id)arg3 shouldDisableAutoCaps:(bool)arg4 isResponseContextBlacklisted:(bool)arg5 contextBeforeInput:(id)arg6 markedText:(id)arg7 selectedText:(id)arg8 contextAfterInput:(id)arg9 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg10 localeIdentifier:(id)arg11 bundleIdentifier:(id)arg12 recipients:(id)arg13 recipientNames:(id)arg14 textContentType:(id)arg15 availableApps:(id)arg16 textualResponseLimit:(unsigned long long)arg17 structuredInfoLimit:(unsigned long long)arg18 totalSuggestionsLimit:(unsigned long long)arg19;
- (id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 adaptationContextID:(id)arg3 shouldDisableAutoCaps:(bool)arg4 isResponseContextBlacklisted:(bool)arg5 contextBeforeInput:(id)arg6 markedText:(id)arg7 selectedText:(id)arg8 contextAfterInput:(id)arg9 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg10 localeIdentifier:(id)arg11 bundleIdentifier:(id)arg12 recipients:(id)arg13 textContentType:(id)arg14 availableApps:(id)arg15 textualResponseLimit:(unsigned long long)arg16 structuredInfoLimit:(unsigned long long)arg17;
- (id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 responseKitConversationTurns:(id)arg3 adaptationContextID:(id)arg4 shouldDisableAutoCaps:(bool)arg5 isResponseContextBlacklisted:(bool)arg6 contextBeforeInput:(id)arg7 markedText:(id)arg8 selectedText:(id)arg9 contextAfterInput:(id)arg10 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg11 localeIdentifier:(id)arg12 bundleIdentifier:(id)arg13 recipients:(id)arg14 recipientNames:(id)arg15 textContentType:(id)arg16 availableApps:(id)arg17 textualResponseLimit:(unsigned long long)arg18 structuredInfoLimit:(unsigned long long)arg19 totalSuggestionsLimit:(unsigned long long)arg20;
- (id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 responseKitConversationTurns:(id)arg3 adaptationContextID:(id)arg4 shouldDisableAutoCaps:(bool)arg5 isResponseContextBlacklisted:(bool)arg6 contextBeforeInput:(id)arg7 markedText:(id)arg8 selectedText:(id)arg9 contextAfterInput:(id)arg10 selectedRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg11 localeIdentifier:(id)arg12 bundleIdentifier:(id)arg13 recipients:(id)arg14 recipientNames:(id)arg15 textContentType:(id)arg16 availableApps:(id)arg17 textualResponseLimit:(unsigned long long)arg18 structuredInfoLimit:(unsigned long long)arg19 totalSuggestionsLimit:(unsigned long long)arg20 initiatingProcess:(id)arg21;
- (id)initiatingProcess;
- (bool)isDocumentEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (bool)isResponseContextBlacklisted;
- (id)localeIdentifier;
- (id)markedText;
- (id)recipientNames;
- (id)recipients;
- (id)responseContext;
- (id)responseKitConversationTurns;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRangeInMarkedText;
- (id)selectedText;
- (bool)shouldDisableAutoCaps;
- (unsigned long long)structuredInfoLimit;
- (id)textContentType;
- (unsigned long long)textualResponseLimit;
- (unsigned long long)totalSuggestionsLimit;

@end
