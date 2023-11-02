
@interface PREResponsesExperimentSuggestionsRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _context;
    bool  _includesDynamicSuggestions;
    NSString * _languageCode;
    NSDate * _languageLastChangedDate;
    NSArray * _receivedMessages;
    NSArray * _recipients;
    NSDate * _requestDate;
    NSArray * _senderMessages;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic) bool includesDynamicSuggestions;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, retain) NSDate *languageLastChangedDate;
@property (nonatomic, readonly, copy) NSArray *receivedMessages;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, retain) NSDate *requestDate;
@property (nonatomic, copy) NSArray *senderMessages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includesDynamicSuggestions;
- (id)initWithCoder:(id)arg1;
- (id)initWithReceivedMessages:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (id)languageLastChangedDate;
- (id)receivedMessages;
- (id)recipients;
- (id)requestDate;
- (id)senderMessages;
- (void)setContext:(id)arg1;
- (void)setIncludesDynamicSuggestions:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLanguageLastChangedDate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setSenderMessages:(id)arg1;

@end
