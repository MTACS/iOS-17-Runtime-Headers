
@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {
    AVDateRangeMetadataGroupInternal * _priv;
}

@property (nonatomic, readonly) NSString *cueingOptions;
@property (getter=_dateRangeMetadataGroupInternal, nonatomic, readonly) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;
@property (nonatomic, readonly) NSDate *discoveryTimestamp;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly) NSDate *modificationTimestamp;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (id)_figMetadataArrayForMetadataItems:(id)arg1;
+ (id)_metadataItemsForFigMetadataArray:(id)arg1;

- (id)_dateRangeMetadataGroupInternal;
- (void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1;
- (id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2;
- (id)_taggedRangeMetadataDictionary;
- (id)classifyingLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cueingOptions;
- (void)dealloc;
- (id)description;
- (id)discoveryTimestamp;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithPropertyList:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)modificationTimestamp;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyList;
- (id)startDate;
- (id)uniqueID;

@end
