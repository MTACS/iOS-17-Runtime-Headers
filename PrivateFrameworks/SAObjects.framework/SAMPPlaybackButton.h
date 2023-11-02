
@interface SAMPPlaybackButton : SAAceView

@property (nonatomic, copy) NSArray *pauseCommands;
@property (nonatomic, copy) NSArray *playCommands;

+ (id)playbackButton;
+ (id)playbackButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)pauseCommands;
- (id)playCommands;
- (void)setPauseCommands:(id)arg1;
- (void)setPlayCommands:(id)arg1;

@end
