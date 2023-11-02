
@protocol _CPSkipSearchFeedback <NSObject>

@required

- (NSString *)experimentId;
- (NSString *)experimentNamespaceId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)input;
- (NSData *)jsonData;
- (void)setExperimentId:(NSString *)arg1;
- (void)setExperimentNamespaceId:(NSString *)arg1;
- (void)setInput:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTreatmentId:(NSString *)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (NSString *)treatmentId;
- (int)triggerEvent;

@end
