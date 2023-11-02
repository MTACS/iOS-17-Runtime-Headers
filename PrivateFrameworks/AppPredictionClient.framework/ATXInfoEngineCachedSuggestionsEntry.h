
@interface ATXInfoEngineCachedSuggestionsEntry : NSObject {
    NSString * _sourceId;
    NSString * _suggestionId;
}

@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, retain) NSString *suggestionId;

- (void).cxx_destruct;
- (void)setSourceId:(id)arg1;
- (void)setSuggestionId:(id)arg1;
- (id)sourceId;
- (id)suggestionId;

@end
