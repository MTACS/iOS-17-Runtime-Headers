
@interface _UIDictationPrivacySheetController : UINavigationController {
    VTUIDictationDataSharingOptInPresenter * _dataSharingOptInPresenter;
    <_UIDictationPrivacySheetControllerDelegate> * _privacyDelegate;
    OBPrivacyPresenter * _privacyPresenter;
    long long  _sheetType;
}

@property (nonatomic, retain) VTUIDictationDataSharingOptInPresenter *dataSharingOptInPresenter;
@property (nonatomic) <_UIDictationPrivacySheetControllerDelegate> *privacyDelegate;
@property (nonatomic, retain) OBPrivacyPresenter *privacyPresenter;
@property (nonatomic) long long sheetType;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)dataSharingOptInPresenter;
- (void)dismiss;
- (id)initWithType:(long long)arg1;
- (id)privacyDelegate;
- (id)privacyPresenter;
- (void)setDataSharingOptInPresenter:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPrivacyDelegate:(id)arg1;
- (void)setPrivacyPresenter:(id)arg1;
- (void)setSheetType:(long long)arg1;
- (long long)sheetType;

@end
