
@interface BWMultitaskingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    NSString * _clientApplicationID;
    bool  _pipEnabled;
    bool  _windowed;
}

@property (nonatomic, copy) NSString *clientApplicationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pipEnabled;
@property (readonly) Class superclass;
@property (nonatomic) bool windowed;

- (id)clientApplicationID;
- (void)dealloc;
- (id)eventDictionary;
- (id)eventName;
- (id)init;
- (bool)pipEnabled;
- (void)reset;
- (void)setClientApplicationID:(id)arg1;
- (void)setPipEnabled:(bool)arg1;
- (void)setWindowed:(bool)arg1;
- (bool)windowed;

@end
