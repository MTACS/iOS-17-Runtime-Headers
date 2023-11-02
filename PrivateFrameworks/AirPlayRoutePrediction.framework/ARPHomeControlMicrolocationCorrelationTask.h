
@interface ARPHomeControlMicrolocationCorrelationTask : NSObject {
    NSString * _file;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    ARPHomeControlCorrelationUtilities * _utilities;
}

@property (nonatomic, readonly, copy) NSString *file;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) ARPHomeControlCorrelationUtilities *utilities;

- (void).cxx_destruct;
- (void)execute;
- (id)file;
- (id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2;
- (id)knowledgeStore;
- (id)queryForMicroLocationsOverlappingEvents:(id)arg1 maxEvents:(unsigned long long)arg2;
- (void)registerARPHomeControlNotificationTask;
- (void)setUtilities:(id)arg1;
- (id)utilities;

@end
