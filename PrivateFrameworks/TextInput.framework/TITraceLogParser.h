
@interface TITraceLogParser : NSObject {
    <TITraceLogParsingDelegate> * _delegate;
    unsigned long long  _version;
}

@property (nonatomic) <TITraceLogParsingDelegate> *delegate;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)convertStringToContext:(id)arg1;
- (id)delegate;
- (id)extractBeamSearchContextStringFromLogText:(id)arg1;
- (bool)parseIntegerHeader:(id)arg1 headerValue:(long long*)arg2 withScanner:(id)arg3;
- (bool)parseStringHeader:(id)arg1 headerValue:(id*)arg2 withScanner:(id)arg3;
- (void)parseTraceLogContent:(id)arg1;
- (id)parseTraceLogContextFromLogText:(id)arg1 andPriorContext:(id)arg2;
- (void)parseTraceLogHeaderWithScanner:(id)arg1;
- (id)parseTraceRecordWithScanner:(id)arg1 andPriorContext:(id)arg2;
- (void)parseTraceRecordsWithScanner:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
