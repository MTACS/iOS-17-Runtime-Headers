
@interface CMSBaseContentFailureEvent : NSObject {
    NSString * _eventName;
    NSString * _serviceID;
    NSString * _sessionIdentifier;
}

@property (nonatomic, retain) NSString *eventName;
@property (nonatomic, retain) NSString *serviceID;
@property (nonatomic, retain) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (id)encoded;
- (id)eventName;
- (id)initWithServiceID:(id)arg1 sessionIdentifier:(id)arg2;
- (id)serviceID;
- (id)sessionIdentifier;
- (void)setEventName:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
