
@protocol TSPDataCopyInputSteamProvider <TSPDataCopyProvider>

@required

- (NSInputStream *)inputStream;
- (NSInputStream *)inputStreamForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
