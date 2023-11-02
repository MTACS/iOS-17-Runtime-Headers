
@interface HMDMediaDestinationControllerLogEvent : HMMLogEvent {
    NSString * _isTriggeredOnControllerDevice;
    NSString * _userPrivilege;
}

@property (readonly, copy) NSString *isTriggeredOnControllerDevice;
@property (readonly, copy) NSString *userPrivilege;

- (void).cxx_destruct;
- (id)initWithIsTriggeredOnControllerDevice:(id)arg1 userPrivilege:(id)arg2;
- (id)isTriggeredOnControllerDevice;
- (id)userPrivilege;

@end
