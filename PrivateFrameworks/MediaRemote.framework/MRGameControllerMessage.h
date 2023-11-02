
@interface MRGameControllerMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long controllerID;
@property (nonatomic, readonly) _MRGameControllerMessageProtobuf *event;

- (unsigned long long)controllerID;
- (id)event;
- (id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;
- (bool)shouldLog;
- (unsigned long long)type;

@end
