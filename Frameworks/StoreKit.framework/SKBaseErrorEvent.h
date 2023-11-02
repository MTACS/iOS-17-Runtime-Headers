
@interface SKBaseErrorEvent : NSObject <SKAnalyticsEventProtocol> {
    NSString * _environment;
    NSString * _eventName;
    NSString * _inAppPurchaseID;
    NSError * _mappedError;
    NSError * _primaryError;
    NSString * _serverCorrelationID;
    long long  _userAction;
}

@property (nonatomic, readonly) bool canCreatePayload;
@property (nonatomic, retain) NSString *environment;
@property (nonatomic, readonly) NSString *eventName;
@property (nonatomic, retain) NSString *inAppPurchaseID;
@property (nonatomic, retain) NSError *mappedError;
@property (nonatomic, retain) NSError *primaryError;
@property (nonatomic, retain) NSString *serverCorrelationID;
@property (nonatomic) long long userAction;

- (void).cxx_destruct;
- (bool)canCreatePayload;
- (id)createPayload;
- (id)environment;
- (id)eventName;
- (id)inAppPurchaseID;
- (id)mappedError;
- (id)primaryError;
- (id)serverCorrelationID;
- (void)setEnvironment:(id)arg1;
- (void)setInAppPurchaseID:(id)arg1;
- (void)setMappedError:(id)arg1;
- (void)setPrimaryError:(id)arg1;
- (void)setServerCorrelationID:(id)arg1;
- (void)setUserAction:(long long)arg1;
- (long long)userAction;

@end
