
@interface SUSSoftwareUpdateScanCell : PSTableCell <SUSSoftwareUpdateCellProtocol> {
    NSString * _currentVersion;
    NSString * _errorMessage;
    NSString * _errorPrimaryButton;
    UIAction * _errorPrimaryButtonAction;
    NSString * _errorTitle;
    NSError * _scanError;
    int  _state;
    bool  _suPathsRestricted;
    bool  _updatesDeferred;
}

@property (nonatomic, retain) NSString *currentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, retain) NSString *errorPrimaryButton;
@property (nonatomic, retain) UIAction *errorPrimaryButtonAction;
@property (nonatomic, retain) NSString *errorTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *scanError;
@property (nonatomic) int state;
@property bool suPathsRestricted;
@property (readonly) Class superclass;
@property bool updatesDeferred;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (id)contentUnavailableConfigurationForState:(int)arg1;
- (id)currentVersion;
- (id)errorMessage;
- (id)errorPrimaryButton;
- (id)errorPrimaryButtonAction;
- (id)errorTitle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (double)preferredHeightWithTable:(id)arg1;
- (id)scanError;
- (void)setCurrentVersion:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorPrimaryButton:(id)arg1;
- (void)setErrorPrimaryButtonAction:(id)arg1;
- (void)setErrorTitle:(id)arg1;
- (void)setScanError:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSuPathsRestricted:(bool)arg1;
- (void)setUpdatesDeferred:(bool)arg1;
- (int)state;
- (bool)suPathsRestricted;
- (id)upToDateManagedText;
- (id)upToDateText;
- (id)upToDateWithAlternate;
- (bool)updatesDeferred;

@end
