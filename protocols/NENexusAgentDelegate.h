
@protocol NENexusAgentDelegate <NSObject>

@required

- (void)closeFlowWithClientIdentifier:(NSUUID *)arg1;
- (void)handleAssertFromClient:(NSUUID *)arg1;
- (bool)handleRequestNexusFromClient:(NSUUID *)arg1;
- (void)handleStartFromClient:(NSUUID *)arg1;
- (void)handleUnassertFromClient:(NSUUID *)arg1;

@end
