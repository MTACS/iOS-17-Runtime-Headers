
@interface MRCreateHostedEndpointResponseMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *groupUID;

- (id)groupUID;
- (id)initWithGroupUID:(id)arg1;
- (unsigned long long)type;

@end
