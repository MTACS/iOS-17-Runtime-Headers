
@interface AVMutableDateRangeMetadataGroup : AVDateRangeMetadataGroup {
    AVDateRangeMetadataGroupInternal * _mutablePriv;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSDate *startDate;

- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endDate;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setEndDate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
