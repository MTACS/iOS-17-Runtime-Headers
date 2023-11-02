
@interface HMDUnifiedLanguageValueListSettingDataProvider : HMFObject <HMDLanguageValueListSettingDataProvider, HMFLogging> {
    <HMDUnifiedLanguageValueListSettingDataProviderDataSource> * _dataSource;
}

@property <HMDUnifiedLanguageValueListSettingDataProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)unifyLanguageValues:(id)arg1 withValues:(id)arg2;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourceDataProviders;
- (id)languageValueList;
- (void)setDataSource:(id)arg1;

@end
