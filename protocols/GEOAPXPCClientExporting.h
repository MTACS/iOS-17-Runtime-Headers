
@protocol GEOAPXPCClientExporting <NSObject>

@required

- (void)endEvalData;
- (void)evalData:(NSData *)arg1 ofType:(unsigned long long)arg2 createTime:(NSDate *)arg3;

@end
