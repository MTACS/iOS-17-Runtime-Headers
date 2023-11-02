
@interface ATXInfoTimelineEntry : NSObject <NSSecureCoding> {
    NSDate * _date;
    bool  _isImportantRelativeToTimeline;
    ATXInfoTimelineEntryRelevance * _relevance;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) bool isImportantRelativeToTimeline;
@property (nonatomic, readonly) ATXInfoTimelineEntryRelevance *relevance;

+ (id)entryWithDate:(id)arg1 importantRelativeToTimeline:(bool)arg2;
+ (id)entryWithDate:(id)arg1 relevance:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 importantRelativeToTimeline:(bool)arg2;
- (id)initWithDate:(id)arg1 relevance:(id)arg2;
- (bool)isImportantRelativeToTimeline;
- (id)relevance;

@end
