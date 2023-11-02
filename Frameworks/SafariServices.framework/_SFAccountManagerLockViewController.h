
@interface _SFAccountManagerLockViewController : UIViewController <PSStateRestoration> {
    UILabel * _accountManagerLockedLabel;
    UIImageView * _lockImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (void)viewDidLoad;

@end
