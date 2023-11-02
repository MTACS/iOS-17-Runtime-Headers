
@interface MRRemoveClientMessage : MRProtocolMessage

@property (nonatomic, readonly) MRClient *client;

- (id)client;
- (id)initWithClient:(id)arg1;
- (unsigned long long)type;

@end
