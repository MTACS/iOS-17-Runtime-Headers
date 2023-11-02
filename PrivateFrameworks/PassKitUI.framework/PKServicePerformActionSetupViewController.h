
@interface PKServicePerformActionSetupViewController : UIViewController <PKPerformActionViewControllerDelegate, PKServicePerformActionSetupViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)configureWithPassUniqueIdentifier:(id)arg1 actionType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)dismiss;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end
