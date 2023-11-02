
@protocol INAnswerCallIntentResponseExport <NSObject, JSExport>

@required

- (INConnectedCall *)answeredCall;
- (NSArray *)callRecords;
- (long long)code;
- (void)setAnsweredCall:(INConnectedCall *)arg1;
- (void)setCallRecords:(NSArray *)arg1;
- (void)setStatusCode:(long long)arg1;
- (long long)statusCode;

@end
