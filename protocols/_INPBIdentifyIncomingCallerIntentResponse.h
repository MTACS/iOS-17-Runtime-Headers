
@protocol _INPBIdentifyIncomingCallerIntentResponse <NSObject>

@required

+ (Class)callRecordsType;

- (int)StringAsStatusCode:(NSString *)arg1;
- (void)addCallRecords:(_INPBCallRecordValue *)arg1;
- (NSArray *)callRecords;
- (_INPBCallRecordValue *)callRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callRecordsCount;
- (void)clearCallRecords;
- (bool)hasStatusCode;
- (void)setCallRecords:(NSArray *)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (NSString *)statusCodeAsString:(int)arg1;

@end
