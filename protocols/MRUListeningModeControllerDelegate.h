
@protocol MRUListeningModeControllerDelegate <NSObject>

@required

- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangeAvailablePrimaryListeningMode:(NSArray *)arg2;
- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangePrimaryListeningMode:(NSString *)arg2;

@optional

- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangeAvailableSecondaryListeningModes:(NSArray *)arg2;
- (void)listeningModeController:(MRUListeningModeController *)arg1 didChangeSecondaryListeningMode:(NSString *)arg2;

@end
