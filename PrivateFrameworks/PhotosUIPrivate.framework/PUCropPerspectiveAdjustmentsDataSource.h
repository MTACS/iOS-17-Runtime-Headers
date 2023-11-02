
@interface PUCropPerspectiveAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource> {
    NSMutableArray * _adjustmentInfoSections;
    PICompositionController * _compositionController;
    <PUCropPerspectiveAdjustmentsDataSourceDelegate> * _delegate;
    NSString * _lastAdjustmentLocalizedName;
    long long  _orientation;
    PUAdjustmentInfo * _pitchAngleInfo;
    PUAdjustmentInfo * _straightenAngleInfo;
    NSMutableDictionary * _valueScaleForKey;
    PEValuesCalculator * _valuesCalculator;
    PUAdjustmentInfo * _yawAngleInfo;
}

@property (nonatomic, retain) NSMutableArray *adjustmentInfoSections;
@property (nonatomic, retain) PICompositionController *compositionController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUCropPerspectiveAdjustmentsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastAdjustmentLocalizedName;
@property (readonly) Class superclass;
@property (nonatomic, retain) PEValuesCalculator *valuesCalculator;

- (void).cxx_destruct;
- (void)_createAdjustmentInfos;
- (void)_enableNonAutoAjustments:(bool)arg1;
- (id)_geometryAdjustmentInfos;
- (void)_modifyAdjustmentForInfo:(id)arg1;
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3;
- (id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4;
- (void)_setDefaultsForInfo:(id)arg1;
- (void)_updateAdjustmentInfos;
- (id)adjustmentInfoSections;
- (void)beginInteractiveChange;
- (bool)canModifyAdjustmentAtIndexPath:(id)arg1;
- (id)compositionController;
- (void)compositionControllerDidChange;
- (id)delegate;
- (void)endInteractiveChange;
- (id)infoForItemAtIndexPath:(id)arg1;
- (id)init;
- (id)lastAdjustmentLocalizedName;
- (void)modifyValue:(double)arg1 atIndexPath:(id)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)renderer;
- (void)resetInfoAtIndexPath:(id)arg1;
- (void)setAdjustmentEnabled:(bool)arg1 atIndexPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAdjustmentInfoSections:(id)arg1;
- (void)setCompositionController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastAdjustmentLocalizedName:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setValuesCalculator:(id)arg1;
- (void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2;
- (id)valuesCalculator;

@end
