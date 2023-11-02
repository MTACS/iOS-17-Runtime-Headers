
@interface COMeshControllerQueuedCommand : NSObject <COMeshControllerQueuedElementProtocol> {
    COMeshCommand * _command;
    id /* block */  _completionHandler;
    COMeshNode * _destination;
}

@property (nonatomic, readonly) COMeshCommand *command;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)command;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (id)initWithCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invokeCallbackWithError:(id)arg1;
- (void)setDestination:(id)arg1;

@end
