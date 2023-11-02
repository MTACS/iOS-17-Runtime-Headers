
@interface PXSmartAlbumLensModelCondition : PXSmartAlbumEXIFCondition {
    NSArray * _lensModels;
}

@property (nonatomic, retain) NSString *lensModel;
@property (nonatomic, readonly) NSArray *lensModels;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (id)lensModel;
- (id)lensModels;
- (void)setLensModel:(id)arg1;

@end
