
@protocol SBSExternalDisplayServiceObserver <NSObject>

@optional

- (void)externalDisplayDidConnect:(SBSConnectedDisplayInfo *)arg1;
- (void)externalDisplayDidUpdateProperties:(SBSConnectedDisplayInfo *)arg1;
- (void)externalDisplayWillDisconnect:(SBSConnectedDisplayInfo *)arg1;

@end
