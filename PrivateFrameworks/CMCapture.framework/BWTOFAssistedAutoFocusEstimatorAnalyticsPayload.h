
@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    NSString * _clientApplicationID;
    NSDictionary * _estimatorResults;
    NSString * _portType;
}

@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *estimatorResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *portType;
@property (readonly) Class superclass;

- (id)clientApplicationID;
- (void)dealloc;
- (id)estimatorResults;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (id)portType;
- (void)reset;
- (void)setClientApplicationID:(id)arg1;
- (void)setEstimatorResults:(id)arg1;
- (void)setPortType:(id)arg1;

@end
