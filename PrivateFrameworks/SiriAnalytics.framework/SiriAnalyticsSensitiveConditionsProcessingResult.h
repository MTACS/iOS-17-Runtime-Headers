
@interface SiriAnalyticsSensitiveConditionsProcessingResult : NSObject {
    void relevantConditionTypes;
    void suppressMessage;
}

@property (nonatomic, readonly) bool suppressMessage;

- (void).cxx_destruct;
- (id)init;
- (bool)suppressMessage;

@end
