
@interface PXSmartAlbumPhotoCondition : PXSmartAlbumCondition {
    NSArray * _photoTypeValues;
}

@property (nonatomic, retain) PXLabeledValue *photoTypeValue;
@property (nonatomic, readonly) NSArray *photoTypeValues;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (id)photoTypeValue;
- (id)photoTypeValues;
- (void)setPhotoTypeValue:(id)arg1;

@end
