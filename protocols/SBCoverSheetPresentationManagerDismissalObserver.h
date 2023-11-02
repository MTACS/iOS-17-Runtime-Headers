
@protocol SBCoverSheetPresentationManagerDismissalObserver <NSObject>

@optional

- (void)coverSheetPresentationManagerDidChangeDismissedSinceKeyBagLock:(SBCoverSheetPresentationManager *)arg1;
- (void)coverSheetPresentationManagerDidChangeDismissedSinceKeyBagLockAndAuthenticated:(SBCoverSheetPresentationManager *)arg1;

@end
