
@interface PXSmartAlbumFocalLengthCondition : PXSmartAlbumEXIFCondition {
    NSArray * _focalLengthValues;
}

@property (nonatomic, retain) PXLabeledValue *focalLengthValue;
@property (nonatomic, readonly) NSArray *focalLengthValues;
@property (nonatomic, retain) PXLabeledValue *secondFocalLengthValue;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)formatter;

- (void).cxx_destruct;
- (id)focalLengthValue;
- (id)focalLengthValues;
- (id)secondFocalLengthValue;
- (void)setFocalLengthValue:(id)arg1;
- (void)setSecondFocalLengthValue:(id)arg1;

@end
