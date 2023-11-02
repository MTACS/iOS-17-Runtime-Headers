
@interface HMDMediaDestinationControllerDestinationLogEvent : HMDMediaDestinationControllerLogEvent {
    NSString * _destinationType;
    NSString * _existingDestinationType;
}

@property (readonly, copy) NSString *destinationType;
@property (readonly, copy) NSString *existingDestinationType;

- (void).cxx_destruct;
- (id)destinationType;
- (id)existingDestinationType;
- (id)initWithExistingDestinationType:(id)arg1 destinationType:(id)arg2 isTriggeredOnControllerDevice:(id)arg3 userPrivilege:(id)arg4;

@end
