
@protocol SBSystemNotesContentViewControllerDelegate <NSObject>

@required

- (void)contentViewController:(SBSystemNotesContentViewController *)arg1 didChangeToPresentationMode:(long long)arg2;
- (void)contentViewController:(void *)arg1 didReceiveScreenshotRequestForDisplays:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SBSystemNotesContentViewController *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)contentViewControllerDidReceiveTapToExpand:(SBSystemNotesContentViewController *)arg1;
- (void)contentViewControllerWantsDismissal:(SBSystemNotesContentViewController *)arg1 forReason:(unsigned long long)arg2 animated:(bool)arg3;

@end
