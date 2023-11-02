
@interface CACVoiceControlServer : AXServer

+ (int)_currentDisplayedCorrectionsCommand;
+ (int)_currentlyDisplayedOverlayLabelsCommand;
+ (id)_serviceName;
+ (id)server;

- (bool)_connectIfNecessary;
- (id)_serviceName;
- (id)currentlyDisplayedCorrections;
- (id)currentlyDisplayedOverlayLabels;

@end
