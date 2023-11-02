
@interface SmartReplies.SRSmartRepliesSuggestionRequest : NSObject <NSCopying, NSSecureCoding> {
    void $__lazy_storage_$_concatenatedReceivedText;
    void $__lazy_storage_$_modifiedRequestWithContactPlaceholder;
    void $__lazy_storage_$_preferredLanguage;
    void $__lazy_storage_$_preferredLocale;
    void context;
    void includeLowConfidenceSuggestions;
    void includesDynamicSuggestions;
    void languageCode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  languageLastChangedDate;
    void receivedMessages;
    void recipients;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requestDate;
    void senderMessages;
    void skipPopulatingMetadata;
    void type;
}

@property (nonatomic, copy) NSString *concatenatedReceivedText;
@property (nonatomic, copy) NSString *context;
@property (nonatomic, readonly) long long hash;
@property (nonatomic) bool includeLowConfidenceSuggestions;
@property (nonatomic) bool includesDynamicSuggestions;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSDate *languageLastChangedDate;
@property (nonatomic, retain) _TtC12SmartReplies31SRSmartRepliesSuggestionRequest *modifiedRequestWithContactPlaceholder;
@property (nonatomic, copy) NSString *preferredLanguage;
@property (nonatomic, copy) NSString *preferredLocale;
@property (nonatomic, copy) NSArray *receivedMessages;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic, copy) NSArray *senderMessages;
@property (nonatomic) bool skipPopulatingMetadata;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)concatenatedReceivedText;
- (id)context;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (bool)includeLowConfidenceSuggestions;
- (bool)includesDynamicSuggestions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 receivedMessages:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (id)languageLastChangedDate;
- (id)modifiedRequestWithContactPlaceholder;
- (id)preferredLanguage;
- (id)preferredLocale;
- (id)receivedMessages;
- (id)receivedMessagesAsStrings;
- (id)recipients;
- (id)requestDate;
- (id)senderMessages;
- (id)senderMessagesAsStrings;
- (void)setConcatenatedReceivedText:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setIncludeLowConfidenceSuggestions:(bool)arg1;
- (void)setIncludesDynamicSuggestions:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLanguageLastChangedDate:(id)arg1;
- (void)setModifiedRequestWithContactPlaceholder:(id)arg1;
- (void)setPreferredLanguage:(id)arg1;
- (void)setPreferredLocale:(id)arg1;
- (void)setReceivedMessages:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setSenderMessages:(id)arg1;
- (void)setSkipPopulatingMetadata:(bool)arg1;
- (void)setType:(long long)arg1;
- (bool)skipPopulatingMetadata;
- (long long)type;

@end
