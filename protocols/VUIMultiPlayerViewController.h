
@protocol VUIMultiPlayerViewController <NSObject>

@required

- (void)addPlayerViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: AVPlayerViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (VUIImageProxy *)backgroundImageProxy;
- (void)captureAndShowPlayerScreenshots;
- (<VUIMultiPlayerViewControllerDelegate> *)delegate;
- (unsigned long long)distribution;
- (void)enterFullscreenWithPlayerViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: AVPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)exitFullscreenWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isShowingProspectivePlayer;
- (bool)isSupportedScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (NSArray *)playerViewControllers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRectForPlayerViewController:(AVPlayerViewController *)arg1;
- (void)recordMetricsEventWithIdentifier:(NSString *)arg1 impressionsData:(NSArray *)arg2 locationData:(NSArray *)arg3 didAddPlayer:(bool)arg4;
- (void)removePlayerViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: AVPlayerViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)replacePlayerViewController:(void *)arg1 atIndex:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: AVPlayerViewController *, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setBackgroundImageProxy:(VUIImageProxy *)arg1;
- (void)setDelegate:(id <VUIMultiPlayerViewControllerDelegate>)arg1;
- (void)setDetailsViewControllerVisible:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setProspectivePlayerVisible:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setProspectivePlayerVisible:(void *)arg1 atIndex:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: bool, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
