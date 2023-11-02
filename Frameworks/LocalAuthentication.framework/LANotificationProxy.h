
@interface LANotificationProxy : NSObject <LANotificationObserverXPC> {
    <LANotificationObserverXPC> * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <LANotificationObserverXPC> *target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1;
- (void)newValue:(id)arg1 oldValue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)target;

@end
