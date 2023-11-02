
@interface CSLPRFStingSystemSettings : NSObject <CSLPRFTwoWaySyncSettingDelegate> {
    <CSLPRFTwoWaySyncSettingDelegate> * _delegate;
    CSLPRFTwoWaySyncSetting * _stingSystemSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSLPRFTwoWaySyncSettingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)read;
- (void)setDelegate:(id)arg1;
- (void)twoWaySyncSettingDidUpdate:(id)arg1;
- (void)write:(id)arg1;

@end
