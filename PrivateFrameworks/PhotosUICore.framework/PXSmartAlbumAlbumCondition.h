
@interface PXSmartAlbumAlbumCondition : PXSmartAlbumCondition {
    NSArray * _albumValues;
}

@property (nonatomic, retain) PXLabeledValue *albumValue;
@property (nonatomic, readonly) bool albumValueIsOrphaned;

+ (id)anyAlbumValue;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (id)_albumValues;
- (id)albumValue;
- (bool)albumValueIsOrphaned;
- (void)setAlbumValue:(id)arg1;

@end
