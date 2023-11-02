
@interface CLKComplicationPreviewTimelineEntry : CLKComplicationTimelineEntry <TLPreviewTimelineEntry> {
    NSArray * _errors;
    long long  _previewFaceColor;
    NSArray * _selectableRegions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long previewFaceColor;
@property (nonatomic, copy) NSArray *selectableRegions;
@property (readonly) Class superclass;
@property (setter=tl_setEntryDate:, nonatomic, retain) NSDate *tl_entryDate;
@property (nonatomic, readonly) NSArray *tl_errors;
@property (nonatomic, readonly) NSArray *tl_selectableRegions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)previewFaceColor;
- (id)selectableRegions;
- (void)setErrors:(id)arg1;
- (void)setPreviewFaceColor:(long long)arg1;
- (void)setSelectableRegions:(id)arg1;
- (id)tl_errors;
- (id)tl_selectableRegions;

@end
