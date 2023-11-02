
@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition {
    NSArray * _shutterSpeedValues;
}

@property (nonatomic, retain) PXLabeledValue *secondShutterSpeedValue;
@property (nonatomic, retain) PXLabeledValue *shutterSpeedValue;
@property (nonatomic, readonly) NSArray *shutterSpeedValues;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)formatter;

- (void).cxx_destruct;
- (id)secondShutterSpeedValue;
- (void)setSecondShutterSpeedValue:(id)arg1;
- (void)setShutterSpeedValue:(id)arg1;
- (id)shutterSpeedValue;
- (id)shutterSpeedValues;

@end
