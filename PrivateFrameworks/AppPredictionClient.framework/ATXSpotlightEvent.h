
@interface ATXSpotlightEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double  _absoluteDate;
    NSString * _actionBlendingCacheId;
    NSString * _actionConsumerSubType;
    NSArray * _actionSuggestionIds;
    NSString * _appBlendingCacheId;
    NSString * _appConsumerSubType;
    NSArray * _appSuggestionIds;
    int  _eventType;
    ATXSpotlightEventMetadata * _metadata;
}

@property (nonatomic, retain) NSString *actionBlendingCacheId;
@property (nonatomic, retain) NSString *actionConsumerSubType;
@property (nonatomic, retain) NSArray *actionSuggestionIds;
@property (nonatomic, retain) NSString *appBlendingCacheId;
@property (nonatomic, retain) NSString *appConsumerSubType;
@property (nonatomic, retain) NSArray *appSuggestionIds;
@property (nonatomic, readonly) unsigned char consumerSubTypeForUIStream;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXSpotlightEventMetadata *metadata;
@property (readonly) Class superclass;

+ (id)actionSuggestionContextMenuDismissOnceEventWithSuggestionId:(id)arg1 actionBlendingCacheId:(id)arg2 date:(id)arg3;
+ (id)actionSuggestionDismissedEventWithSuggestionId:(id)arg1 actionBlendingCacheId:(id)arg2 date:(id)arg3;
+ (id)actionSuggestionTappedEventWithSuggestion:(id)arg1 actionBlendingCacheId:(id)arg2 currentQuery:(id)arg3 date:(id)arg4;
+ (id)appSuggestionTappedEventWithSuggestion:(id)arg1 appBlendingCacheId:(id)arg2 currentQuery:(id)arg3 date:(id)arg4;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)searchResultTappedWithEngagedBundleId:(id)arg1 searchedActionType:(unsigned long long)arg2 date:(id)arg3;
+ (id)suggestionsAppearedEventWithAppSuggestionIds:(id)arg1 actionSuggestionIds:(id)arg2 appBlendingCacheId:(id)arg3 actionBlendingCacheId:(id)arg4 date:(id)arg5;
+ (bool)supportsSecureCoding;
+ (id)viewAppearedEventWithSFFeedback:(id)arg1 date:(id)arg2;
+ (id)viewDisappearedEventWithDidSearch:(bool)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (id)_stringArrayToUUIDArray:(id)arg1;
- (void)_updateActionUIFeedbackSession:(id)arg1;
- (void)_updateAppUIFeedbackSession:(id)arg1;
- (id)actionBlendingCacheId;
- (id)actionConsumerSubType;
- (id)actionSuggestionIds;
- (id)appBlendingCacheId;
- (id)appConsumerSubType;
- (id)appSuggestionIds;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForint32_t:(int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned char)consumerSubTypeForUIStream;
- (unsigned int)dataVersion;
- (id)date;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (int)eventType;
- (unsigned long long)hash;
- (id)initWithAbsoluteDate:(double)arg1 eventType:(int)arg2 appConsumerSubType:(id)arg3 actionConsumerSubType:(id)arg4 appBlendingCacheId:(id)arg5 actionBlendingCacheId:(id)arg6 appSuggestionIds:(id)arg7 actionSuggestionIds:(id)arg8 metadata:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 eventType:(int)arg2 appConsumerSubType:(id)arg3 actionConsumerSubType:(id)arg4 appBlendingCacheId:(id)arg5 actionBlendingCacheId:(id)arg6 appSuggestionIds:(id)arg7 actionSuggestionIds:(id)arg8 metadata:(id)arg9;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSpotlightEvent:(id)arg1;
- (id)json;
- (id)jsonDict;
- (id)metadata;
- (id)proto;
- (id)serialize;
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;
- (void)setActionBlendingCacheId:(id)arg1;
- (void)setActionConsumerSubType:(id)arg1;
- (void)setActionSuggestionIds:(id)arg1;
- (void)setAppBlendingCacheId:(id)arg1;
- (void)setAppConsumerSubType:(id)arg1;
- (void)setAppSuggestionIds:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;

@end
