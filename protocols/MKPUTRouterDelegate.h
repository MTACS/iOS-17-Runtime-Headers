
@protocol MKPUTRouterDelegate <NSObject>

@required

- (void)router:(MKPUTRouter *)arg1 didReceiveAccessibilitySettingEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveAccountEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveApplicationEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveBookmarkEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveContainer:(NSString *)arg2 signature:(NSString *)arg3 chunk:(NSData *)arg4 filename:(NSString *)arg5 offset:(unsigned long long)arg6 length:(unsigned long long)arg7 total:(unsigned long long)arg8 required:(bool)arg9 excludedFromBackup:(bool)arg10;
- (void)router:(MKPUTRouter *)arg1 didReceiveDiagnosticsFile:(NSData *)arg2 filename:(NSString *)arg3;
- (void)router:(MKPUTRouter *)arg1 didReceiveDisplaySettingEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveFileChunk:(NSData *)arg2 filename:(NSString *)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 total:(unsigned long long)arg6;
- (void)router:(MKPUTRouter *)arg1 didReceiveICal:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveImageChunk:(NSData *)arg2 identifier:(NSString *)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 total:(unsigned long long)arg6 filename:(NSString *)arg7 collection:(NSString *)arg8 originalFilename:(NSString *)arg9;
- (void)router:(MKPUTRouter *)arg1 didReceiveMessageEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceivePerformanceMetrics:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceivePlaceholderEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveSIMEncodedInJSON:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveVCard:(NSData *)arg2;
- (void)router:(MKPUTRouter *)arg1 didReceiveVideoChunk:(NSData *)arg2 identifier:(NSString *)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 total:(unsigned long long)arg6 filename:(NSString *)arg7 collection:(NSString *)arg8 originalFilename:(NSString *)arg9;

@end
