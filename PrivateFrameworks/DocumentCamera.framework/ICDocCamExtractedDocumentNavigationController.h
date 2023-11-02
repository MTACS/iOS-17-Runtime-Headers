
@interface ICDocCamExtractedDocumentNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5;
- (void)prepareForDismissal;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
