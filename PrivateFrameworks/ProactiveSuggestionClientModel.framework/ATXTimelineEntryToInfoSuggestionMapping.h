
@interface ATXTimelineEntryToInfoSuggestionMapping : NSObject {
    NSString * _suggestionId;
    long long  _suggestionMappingReason;
    ATXInfoTimelineEntry * _timelineEntry;
}

@property (nonatomic, readonly) NSString *suggestionId;
@property (nonatomic, readonly) long long suggestionMappingReason;
@property (nonatomic, readonly) ATXInfoTimelineEntry *timelineEntry;

+ (id)entryMappingWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3;
- (id)suggestionId;
- (long long)suggestionMappingReason;
- (id)timelineEntry;

@end
