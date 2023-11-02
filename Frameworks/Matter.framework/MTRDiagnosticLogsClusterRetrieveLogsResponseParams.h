
@interface MTRDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject <NSCopying> {
    NSData * _logContent;
    NSNumber * _status;
    NSNumber * _timeSinceBoot;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _utcTimeStamp;
}

@property (nonatomic, copy) NSData *content;
@property (nonatomic, copy) NSData *logContent;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timeSinceBoot;
@property (nonatomic, copy) NSNumber *timeStamp;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *utcTimeStamp;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)logContent;
- (void)setContent:(id)arg1;
- (void)setLogContent:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimeSinceBoot:(id)arg1;
- (void)setTimeStamp:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUtcTimeStamp:(id)arg1;
- (id)status;
- (id)timeSinceBoot;
- (id)timeStamp;
- (id)timedInvokeTimeoutMs;
- (id)utcTimeStamp;

@end
