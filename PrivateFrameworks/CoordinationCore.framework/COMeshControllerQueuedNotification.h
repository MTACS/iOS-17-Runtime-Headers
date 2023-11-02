
@interface COMeshControllerQueuedNotification : NSObject <COMeshControllerQueuedElementProtocol> {
    COMeshNode * _destination;
    COMeshNotification * _notification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COMeshNotification *notification;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (id)initWithNotification:(id)arg1 destination:(id)arg2;
- (void)invokeCallbackWithError:(id)arg1;
- (id)notification;

@end
