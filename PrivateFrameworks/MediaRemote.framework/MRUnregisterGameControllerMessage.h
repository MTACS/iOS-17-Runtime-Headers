
@interface MRUnregisterGameControllerMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long controllerID;

- (unsigned long long)controllerID;
- (id)initWithControllerID:(unsigned long long)arg1;
- (unsigned long long)type;

@end
