
@interface SiriAnalyticsMessageProcessingStrategy : NSObject {
    void messageStaging;
    void metadataExtractor;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessageStaging:(id)arg1 metadataExtractor:(id)arg2;
- (void)processWithMessages:(id)arg1;

@end
