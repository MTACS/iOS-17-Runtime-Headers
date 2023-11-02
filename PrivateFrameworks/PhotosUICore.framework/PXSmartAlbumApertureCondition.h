
@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition {
    NSArray * _apertureValues;
}

@property (nonatomic, retain) PXLabeledValue *apertureValue;
@property (nonatomic, readonly) NSArray *apertureValues;
@property (nonatomic, retain) PXLabeledValue *secondApertureValue;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)formatter;

- (void).cxx_destruct;
- (id)apertureValue;
- (id)apertureValues;
- (id)secondApertureValue;
- (void)setApertureValue:(id)arg1;
- (void)setSecondApertureValue:(id)arg1;

@end
