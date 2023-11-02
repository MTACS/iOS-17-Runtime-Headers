
@interface PXSmartAlbumFlashCondition : PXSmartAlbumCondition {
    NSArray * _flashFiredValues;
}

@property (nonatomic, retain) PXLabeledValue *flashFiredValue;
@property (nonatomic, readonly) NSArray *flashFiredValues;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (id)flashFiredValue;
- (id)flashFiredValues;
- (void)setFlashFiredValue:(id)arg1;

@end
