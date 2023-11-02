
@interface _CPSessionMissingSuggestionsFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSessionMissingSuggestionsFeedback> {
    NSArray * _suggestions;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *suggestions;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)suggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
