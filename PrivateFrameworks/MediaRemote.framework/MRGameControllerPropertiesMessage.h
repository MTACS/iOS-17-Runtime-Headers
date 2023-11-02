
@interface MRGameControllerPropertiesMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned long long controllerID;
@property (nonatomic, readonly) _MRGameControllerPropertiesProtobuf *properties;

- (unsigned long long)controllerID;
- (id)initWithGameControllerProperties:(id)arg1 controllerID:(unsigned long long)arg2;
- (id)properties;
- (unsigned long long)type;

@end
