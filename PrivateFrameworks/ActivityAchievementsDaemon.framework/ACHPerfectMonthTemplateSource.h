
@interface ACHPerfectMonthTemplateSource : NSObject <ACHTemplateAssetSource, ACHTemplateSource> {
    NSCalendar * _utcGregorianCalendar;
}

@property (nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long runCadence;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSCalendar *utcGregorianCalendar;

- (void).cxx_destruct;
- (id)_modelsDirectoryBasePathForTemplate:(id)arg1;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)identifier;
- (id)init;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (long long)runCadence;
- (void)setUtcGregorianCalendar:(id)arg1;
- (bool)sourceShouldRunForDate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(id /* block */)arg2;
- (id)utcGregorianCalendar;

@end
