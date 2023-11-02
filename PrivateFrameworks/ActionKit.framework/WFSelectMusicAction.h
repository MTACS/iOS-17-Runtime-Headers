
@interface WFSelectMusicAction : WFAction

@property (nonatomic, readonly) bool selectMultiple;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (bool)selectMultiple;

@end
