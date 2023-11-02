
@interface HMDAccessorySettingsLocalMessageHandler : HMFObject <HMFLogging> {
    <HMDAccessorySettingsLocalMessageHandlerDataSource> * _dataSource;
    <HMDAccessorySettingsLocalMessageHandlerDelegate> * _delegate;
    NSUUID * _homeUUID;
    <HMDLanguageValueListSettingDataProvider> * _languageValuesDataProvider;
}

@property <HMDAccessorySettingsLocalMessageHandlerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDAccessorySettingsLocalMessageHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) <HMDLanguageValueListSettingDataProvider> *languageValuesDataProvider;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)callerVersionForMessage:(id)arg1;
- (id)dataSource;
- (unsigned long long)dataSourceCallerPrivilegeWithMessage:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (void)handleAccessorySettingsFetchRequestMessage:(id)arg1;
- (void)handleAccessorySettingsUpdateRequestMessage:(id)arg1;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1 languageValuesDataProvider:(id)arg2;
- (id)languageValuesDataProvider;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)siriAvailableLanguagesSetting;

@end
