
@protocol _INPBAnswerCallIntentResponse <NSObject>

@required

+ (Class)callRecordsType;

- (int)StringAsStatusCode:(NSString *)arg1;
- (void)addCallRecords:(_INPBCallRecordValue *)arg1;
- (_INPBConnectedCall *)answeredCall;
- (NSArray *)callRecords;
- (_INPBCallRecordValue *)callRecordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callRecordsCount;
- (void)clearCallRecords;
- (bool)hasAnsweredCall;
- (bool)hasStatusCode;
- (void)setAnsweredCall:(_INPBConnectedCall *)arg1;
- (void)setCallRecords:(NSArray *)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (NSString *)statusCodeAsString:(int)arg1;

@end
