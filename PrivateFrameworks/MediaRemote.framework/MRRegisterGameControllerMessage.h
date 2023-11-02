
@interface MRRegisterGameControllerMessage : MRProtocolMessage

@property (nonatomic, readonly) _MRGameControllerPropertiesProtobuf *properties;

- (id)initWithProperties:(id)arg1;
- (id)properties;
- (unsigned long long)type;

@end
