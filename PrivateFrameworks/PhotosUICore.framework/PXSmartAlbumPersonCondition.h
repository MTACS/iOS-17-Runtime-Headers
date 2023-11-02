
@interface PXSmartAlbumPersonCondition : PXSmartAlbumCondition {
    NSArray * _personNames;
}

@property (nonatomic, retain) NSString *personName;
@property (nonatomic, readonly) NSArray *personNames;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (id)personName;
- (id)personNames;
- (void)setPersonName:(id)arg1;

@end
