
@interface PXSmartAlbumKeywordCondition : PXSmartAlbumCondition {
    NSArray * _keywordValues;
}

@property (nonatomic, retain) PXLabeledValue *keywordValue;
@property (nonatomic, readonly) NSArray *keywordValues;

+ (id)anyKeywordValue;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;

- (void).cxx_destruct;
- (id)keywordValue;
- (id)keywordValues;
- (void)setKeywordValue:(id)arg1;

@end
