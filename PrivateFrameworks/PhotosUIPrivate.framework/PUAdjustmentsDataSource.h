
@interface PUAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource> {
    NSMutableArray * _adjustmentInfoSections;
    unsigned long long  _assetType;
    PEAutoAdjustmentController * _autoEnhanceController;
    PICompositionController * _compositionController;
    <PUAdjustmentsDataSourceDelegate> * _delegate;
    NSString * _lastAdjustmentLocalizedName;
    PEValuesCalculator * _valuesCalculator;
}

@property (nonatomic, retain) NSMutableArray *adjustmentInfoSections;
@property (nonatomic) unsigned long long assetType;
@property (nonatomic, retain) PEAutoAdjustmentController *autoEnhanceController;
@property (nonatomic, retain) PICompositionController *compositionController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUAdjustmentsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastAdjustmentLocalizedName;
@property (readonly) Class superclass;
@property (nonatomic, retain) PEValuesCalculator *valuesCalculator;

- (void).cxx_destruct;
- (id)_autoEnhanceAdjustmentInfo;
- (id)_colorAdjustmentInfos;
- (void)_createAdjustmentInfos;
- (id)_debugAdjustmentInfos;
- (id)_detailAdjustmentInfos;
- (void)_enableNonAutoAdjustments:(bool)arg1;
- (id)_lightAdjustmentInfos;
- (void)_modifyAdjustmentForInfo:(id)arg1;
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3;
- (id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4;
- (void)_resetEnabledStateForAutoEnhancedInfos;
- (void)_setDefaultsForInfo:(id)arg1;
- (id)_smartBlackAndWhiteAdjustmentInfos;
- (void)_updateAdjustmentInfos;
- (id)_vignetteAdjustmentInfos;
- (id)adjustmentInfoSections;
- (unsigned long long)assetType;
- (id)autoEnhanceController;
- (void)beginInteractiveChange;
- (bool)canModifyAdjustmentAtIndexPath:(id)arg1;
- (id)compositionController;
- (void)compositionControllerDidChange;
- (id)delegate;
- (void)endInteractiveChange;
- (id)infoForItemAtIndexPath:(id)arg1;
- (id)lastAdjustmentLocalizedName;
- (void)modifyValue:(double)arg1 atIndexPath:(id)arg2;
- (long long)numberOfItemsInAllSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)renderer;
- (void)resetInfoAtIndexPath:(id)arg1;
- (void)setAdjustmentEnabled:(bool)arg1 atIndexPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAdjustmentInfoSections:(id)arg1;
- (void)setAssetType:(unsigned long long)arg1;
- (void)setAutoEnhanceController:(id)arg1;
- (void)setCompositionController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAdjustmentLocalizedName:(id)arg1;
- (void)setValuesCalculator:(id)arg1;
- (void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2 autoAdjustmentController:(id)arg3 assetType:(unsigned long long)arg4;
- (id)valuesCalculator;

@end
