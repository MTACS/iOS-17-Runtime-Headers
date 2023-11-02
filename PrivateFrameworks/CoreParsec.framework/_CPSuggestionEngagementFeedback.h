
@interface _CPSuggestionEngagementFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSuggestionEngagementFeedback> {
    _CPSearchSuggestionForFeedback * _suggestion;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _CPSearchSuggestionForFeedback *suggestion;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSuggestion:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)suggestion;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
