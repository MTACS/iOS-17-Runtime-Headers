
@interface ASCompetitionTemplateSource : NSObject <ACHTemplateSource> {
    <ASCompetitionTemplateSourceDataProvider> * _dataProvider;
    NSObject<ACHTemplateSourceDelegate> * delegate;
}

@property (nonatomic) <ASCompetitionTemplateSourceDataProvider> *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long runCadence;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_competitionForVictoryTemplate:(id)arg1;
- (id)_friendForVictoryTemplate:(id)arg1;
- (id)customPlaceholderValuesForTemplate:(id)arg1;
- (id)dataProvider;
- (id)delegate;
- (id)identifier;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (long long)runCadence;
- (void)setDataProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)sourceShouldRunForDate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(id /* block */)arg2;
- (id)unusedTemplateNamesForFriendWithUUID:(id)arg1;

@end
