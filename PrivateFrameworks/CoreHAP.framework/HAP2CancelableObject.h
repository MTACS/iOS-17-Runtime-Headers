
@interface HAP2CancelableObject : HAP2LoggingObject <HAP2Cancelable> {
    NSError * _cancelError;
    HAP2PropertyLock * _propertyLock;
}

@property (nonatomic, retain) NSError *cancelError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HAP2PropertyLock *propertyLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cancelError;
- (void)cancelWithError:(id)arg1;
- (id)init;
- (id)propertyLock;
- (void)setCancelError:(id)arg1;

@end
