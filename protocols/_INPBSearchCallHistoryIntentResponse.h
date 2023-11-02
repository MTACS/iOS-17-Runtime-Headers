
@protocol _INPBSearchCallHistoryIntentResponse <NSObject>

@required

+ (Class)callRecordsType;

- (void)addCallRecords:(_INPBCallRecordValue *)arg1;
- (NSArray *)callRecords;
- (_INPBCallRecordValue *)callRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callRecordsCount;
- (void)clearCallRecords;
- (NSString *)dateCreated;
- (bool)hasDateCreated;
- (bool)hasStatus;
- (bool)hasTargetContact;
- (void)setCallRecords:(NSArray *)arg1;
- (void)setDateCreated:(NSString *)arg1;
- (void)setStatus:(NSString *)arg1;
- (void)setTargetContact:(NSString *)arg1;
- (NSString *)status;
- (NSString *)targetContact;

@end
