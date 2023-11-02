
@interface DismissTimerIntent : INIntent

@property (nonatomic, copy) NSString *remoteDeviceId;
@property (nonatomic, copy) NSString *remoteExecutionId;
@property (nonatomic, retain) NSNumber *skipConfirmation;
@property (nonatomic, copy) NSString *timerId;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
