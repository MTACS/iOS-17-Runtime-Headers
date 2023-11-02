
@interface DTXProxyChannel : NSObject {
    NSSet * _additionalAllowedClassesForProtocolMethods;
    DTXChannel * _channel;
    Protocol * _exportedInterface;
    _Atomic bool  _hasProcessedMessage;
    Protocol * _remoteInterface;
}

@property (nonatomic, retain) NSSet *additionalAllowedClassesForProtocolMethods;
@property (nonatomic, retain) DTXChannel *channel;
@property (retain) Protocol *remoteInterface;
@property (readonly) id remoteObjectProxy;

- (void).cxx_destruct;
- (id)_allowedClassesForArgumentsOfRemoteInterfaceSelector:(SEL)arg1 methodSignature:(id)arg2;
- (id)_allowedClassesForReturnValues;
- (void)_sendInvocationMessage:(id)arg1;
- (id)_validateDispatch:(id)arg1;
- (id)additionalAllowedClassesForProtocolMethods;
- (void)cancel;
- (id)channel;
- (id)initWithChannel:(id)arg1 remoteProtocol:(id)arg2 localProtocol:(id)arg3;
- (id)remoteInterface;
- (id)remoteObjectProxy;
- (void)setAdditionalAllowedClassesForProtocolMethods:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setExportedObject:(id)arg1 queue:(id)arg2;
- (void)setRemoteInterface:(id)arg1;

@end
