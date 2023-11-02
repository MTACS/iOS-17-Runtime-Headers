
@interface PXSmartAlbumISOCondition : PXSmartAlbumEXIFCondition {
    NSArray * _ISOValues;
}

@property (nonatomic, retain) PXLabeledValue *ISOValue;
@property (nonatomic, readonly) NSArray *ISOValues;
@property (nonatomic, retain) PXLabeledValue *secondISOValue;

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)formatter;

- (void).cxx_destruct;
- (id)ISOValue;
- (id)ISOValues;
- (id)secondISOValue;
- (void)setISOValue:(id)arg1;
- (void)setSecondISOValue:(id)arg1;

@end
