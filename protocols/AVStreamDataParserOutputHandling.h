
@protocol AVStreamDataParserOutputHandling <NSObject>

@optional

- (void)streamDataParser:(AVStreamDataParser *)arg1 didFailToParseStreamDataWithError:(NSError *)arg2;
- (void)streamDataParser:(AVStreamDataParser *)arg1 didParseStreamDataAsAsset:(AVAsset *)arg2 withDiscontinuity:(bool)arg3;
- (void)streamDataParser:(AVStreamDataParser *)arg1 didProvideContentKeyRequestInitializationData:(NSData *)arg2 forTrackID:(int)arg3;
- (void)streamDataParser:(AVStreamDataParser *)arg1 didProvideContentKeySpecifier:(AVContentKeySpecifier *)arg2 forTrackID:(int)arg3;
- (void)streamDataParser:(AVStreamDataParser *)arg1 didProvideMediaData:(struct opaqueCMSampleBuffer { }*)arg2 forTrackID:(int)arg3 mediaType:(NSString *)arg4 flags:(unsigned long long)arg5;
- (void)streamDataParser:(AVStreamDataParser *)arg1 didReachEndOfTrackWithTrackID:(int)arg2 mediaType:(NSString *)arg3;
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:(AVStreamDataParser *)arg1 forTrackID:(int)arg2;

@end
