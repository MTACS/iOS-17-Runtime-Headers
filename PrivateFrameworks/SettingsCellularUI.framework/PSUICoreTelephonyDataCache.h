
@interface PSUICoreTelephonyDataCache : NSObject <CoreTelephonyClientDataDelegate, RadiosPreferencesDelegate> {
    bool  _cellularDataSetting;
    bool  _cellularDataSettingInitialized;
    bool  _cellularStatisticsSetting;
    bool  _cellularStatisticsSettingFetched;
    CoreTelephonyClient * _client;
    struct __CTServerConnection { } * _ctConnection;
    NSMutableDictionary * _dataStatusDict;
    NSMutableDictionary * _intlDataAccessStatus;
    NSMutableDictionary * _isPrivateNetworkSIM;
    struct { 
        bool fFeatureEnabled; 
        bool fUserEnabled; 
    }  _privacyProxySetting;
    bool  _privacyProxySettingsFetched;
    RadiosPreferences * _radioPreferences;
}

@property bool cellularDataSetting;
@property bool cellularDataSettingInitialized;
@property bool cellularStatisticsSetting;
@property bool cellularStatisticsSettingFetched;
@property (nonatomic, retain) CoreTelephonyClient *client;
@property struct __CTServerConnection { }*ctConnection;
@property (retain) NSMutableDictionary *dataStatusDict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *intlDataAccessStatus;
@property (retain) NSMutableDictionary *isPrivateNetworkSIM;
@property struct { bool x1; bool x2; } privacyProxySetting;
@property bool privacyProxySettingsFetched;
@property (nonatomic, retain) RadiosPreferences *radioPreferences;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (bool)cellularDataSetting;
- (bool)cellularDataSettingInitialized;
- (bool)cellularStatisticsSetting;
- (bool)cellularStatisticsSettingFetched;
- (id)client;
- (id)copyStartDateOfCellularDataUsageRecords;
- (struct __CTServerConnection { }*)ctConnection;
- (void)dataRoamingSettingsChanged:(id)arg1 status:(bool)arg2;
- (void)dataSettingsChanged:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (id)dataStatusDict;
- (void)dealloc;
- (void)eraseCellularDataUsageRecords;
- (void)fetchCellularDataEnabled;
- (void)fetchCellularUsageStatisticsSetting;
- (void)fetchDataStatus;
- (void)fetchInternationalDataAccessStatus:(id)arg1;
- (void)fetchIsPrivateNetworkSIM:(id)arg1;
- (void)fetchPrivacyProxyStatus:(id)arg1;
- (id)getDataStatus:(id)arg1;
- (bool)getInternationalDataAccessStatus;
- (bool)getInternationalDataAccessStatus:(id)arg1;
- (id)getLogger;
- (id)init;
- (id)initPrivate;
- (id)intlDataAccessStatus;
- (bool)isAirplaneModeEnabled;
- (bool)isCellularDataEnabled;
- (bool)isCellularUsageStatisticsEnabled;
- (bool)isDataFallbackEnabled;
- (bool)isPrivacyProxyEnabled:(id)arg1;
- (id)isPrivateNetworkSIM;
- (bool)isPrivateNetworkSIM:(id)arg1;
- (bool)isUserSubscribedToPrivacyProxy:(id)arg1;
- (struct { bool x1; bool x2; })privacyProxySetting;
- (bool)privacyProxySettingsFetched;
- (id)radioPreferences;
- (void)setCellularDataEnabled:(bool)arg1;
- (void)setCellularDataSetting:(bool)arg1;
- (void)setCellularDataSettingInitialized:(bool)arg1;
- (void)setCellularStatisticsSetting:(bool)arg1;
- (void)setCellularStatisticsSettingFetched:(bool)arg1;
- (void)setCellularUsageStatisticsEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setClient:(id)arg1;
- (void)setCtConnection:(struct __CTServerConnection { }*)arg1;
- (void)setDataFallbackEnabled:(bool)arg1;
- (void)setDataStatusDict:(id)arg1;
- (void)setInternationalDataAccessStatus:(bool)arg1;
- (void)setInternationalDataAccessStatus:(id)arg1 status:(bool)arg2;
- (void)setIntlDataAccessStatus:(id)arg1;
- (void)setIsPrivateNetworkSIM:(id)arg1;
- (void)setPrivacyProxy:(id)arg1 enabled:(bool)arg2;
- (void)setPrivacyProxySetting:(struct { bool x1; bool x2; })arg1;
- (void)setPrivacyProxySettingsFetched:(bool)arg1;
- (void)setRadioPreferences:(id)arg1;
- (void)willEnterForeground;

@end
