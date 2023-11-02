
@protocol CSActionHandling <NSObject>

@required

- (void)handleAction:(CSAction *)arg1 fromSender:(id <CSCoverSheetParticipating>)arg2;

@end
