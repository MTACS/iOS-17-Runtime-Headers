
@interface MSDefaultServiceChangedEvent : NSObject {
    NSString * _oldServiceID;
    NSString * _serviceID;
}

@property (nonatomic, retain) NSString *oldServiceID;
@property (nonatomic, retain) NSString *serviceID;

- (void).cxx_destruct;
- (id)initWithOldServiceID:(id)arg1 newServiceID:(id)arg2;
- (id)oldServiceID;
- (id)serviceID;
- (void)setOldServiceID:(id)arg1;
- (void)setServiceID:(id)arg1;

@end
