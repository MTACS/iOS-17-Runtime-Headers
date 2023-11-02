
@interface MRRegisterForGameControllerEventsMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int inputMode;

- (id)initWithInputMode:(unsigned int)arg1;
- (unsigned int)inputMode;
- (unsigned long long)type;

@end
