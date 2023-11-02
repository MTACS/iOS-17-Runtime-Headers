
@protocol SBSExternalDisplayServiceServerToClientInterface <NSObject>

@required

- (oneway void)externalDisplayDidConnect:(SBSConnectedDisplayInfo *)arg1;
- (oneway void)externalDisplayDidUpdateProperties:(SBSConnectedDisplayInfo *)arg1;
- (oneway void)externalDisplayWillDisconnect:(SBSConnectedDisplayInfo *)arg1;

@end
