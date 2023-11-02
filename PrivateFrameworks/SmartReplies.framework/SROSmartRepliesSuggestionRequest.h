
@interface SROSmartRepliesSuggestionRequest : NSObject {
    bool  _skipPopulatingMetadata;
    _TtC12SmartReplies31SRSmartRepliesSuggestionRequest * _underlyingRequest;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic) bool includeLowConfidenceSuggestions;
@property (nonatomic) bool includesDynamicSuggestions;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSDate *languageLastChangedDate;
@property (nonatomic, readonly, copy) NSArray *receivedMessages;
@property (nonatomic, copy) NSDate *requestDate;
@property (nonatomic, copy) NSArray *senderMessages;
@property (nonatomic) bool skipPopulatingMetadata;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_unwrappedMessagesForWrappedMessages:(id)arg1;
+ (id)_wrappedMessagesForUnwrappedMessages:(id)arg1;

- (void).cxx_destruct;
- (id)context;
- (bool)includeLowConfidenceSuggestions;
- (bool)includesDynamicSuggestions;
- (id)initWithType:(unsigned long long)arg1 receivedMessages:(id)arg2;
- (id)languageCode;
- (id)languageLastChangedDate;
- (id)receivedMessages;
- (id)requestDate;
- (id)senderMessages;
- (void)setContext:(id)arg1;
- (void)setIncludeLowConfidenceSuggestions:(bool)arg1;
- (void)setIncludesDynamicSuggestions:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLanguageLastChangedDate:(id)arg1;
- (void)setReceivedMessages:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setSenderMessages:(id)arg1;
- (void)setSkipPopulatingMetadata:(bool)arg1;
- (bool)skipPopulatingMetadata;
- (unsigned long long)type;

@end
