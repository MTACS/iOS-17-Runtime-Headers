
@protocol CSAddParticipantsViewControllerDelegate <NSObject>

@required

- (void)addParticipantsViewController:(CSAddParticipantsViewController *)arg1 completedSharingWithShareURL:(NSURL *)arg2 ckShare:(CKShare *)arg3;
- (void)addParticipantsViewController:(CSAddParticipantsViewController *)arg1 failedToSaveShareWithError:(NSError *)arg2;

@end
