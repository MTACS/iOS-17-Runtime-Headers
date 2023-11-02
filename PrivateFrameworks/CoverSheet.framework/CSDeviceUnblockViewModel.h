
@interface CSDeviceUnblockViewModel : NSObject {
    CSDeviceBlockViewController * _blockViewController;
    CSDeviceUnblockPolicy * _unblockPolicy;
}

@property (nonatomic) CSDeviceBlockViewController *blockViewController;
@property (nonatomic, retain) CSDeviceUnblockPolicy *unblockPolicy;

- (void).cxx_destruct;
- (id)_localizedProductName;
- (id)_localizedStringForKey:(id)arg1;
- (id)blockViewController;
- (id)bodySubtitleText;
- (id)bodyTextForTimeout:(id)arg1;
- (void)cancelButtonAction;
- (id)cancelButtonText;
- (id)iconName;
- (id)initWithUnblockPolicy:(id)arg1 blockViewController:(id)arg2;
- (void)primaryButtonAction;
- (id)primaryButtonText;
- (void)secondaryButtonAction;
- (id)secondaryButtonText;
- (void)setBlockViewController:(id)arg1;
- (void)setUnblockPolicy:(id)arg1;
- (id)titleText;
- (id)unblockPolicy;

@end
