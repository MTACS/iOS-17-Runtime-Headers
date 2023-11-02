
@protocol INIdentifyIncomingCallerIntentResponseExport <NSObject, JSExport>

@required

- (NSArray *)callRecords;
- (long long)code;
- (void)setCallRecords:(NSArray *)arg1;
- (void)setStatusCode:(long long)arg1;
- (long long)statusCode;

@end
