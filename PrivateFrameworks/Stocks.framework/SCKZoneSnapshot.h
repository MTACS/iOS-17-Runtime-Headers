
@interface SCKZoneSnapshot : NSObject <SCKZoneReading> {
    NSArray * _records;
    SCKZoneSchema * _zoneSchema;
}

@property (nonatomic, readonly, copy) NSArray *allRecords;
@property (nonatomic, copy) NSArray *records;
@property (nonatomic, retain) SCKZoneSchema *zoneSchema;

- (void).cxx_destruct;
- (id)allRecords;
- (id)descriptionOfContents;
- (id)initWithZoneSchema:(id)arg1 records:(id)arg2;
- (bool)isEqualToSnapshot:(id)arg1;
- (id)recordOfType:(id)arg1;
- (id)recordOfType:(id)arg1 passingTest:(id /* block */)arg2;
- (id)recordWithName:(id)arg1;
- (id)records;
- (id)recordsOfType:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setZoneSchema:(id)arg1;
- (id)zoneSchema;

@end
