
@interface MSSetupFailedEvent : MSBaseSetupEvent {
    NSString * _errorName;
    NSString * _serviceID;
}

@property (nonatomic, retain) NSString *errorName;
@property (nonatomic, retain) NSString *serviceID;

- (void).cxx_destruct;
- (id)encoded;
- (id)errorName;
- (id)initWithErrorNamed:(id)arg1;
- (id)serviceID;
- (void)setErrorName:(id)arg1;
- (void)setServiceID:(id)arg1;

@end
