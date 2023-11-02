
@protocol MOVStreamReaderDelegate <MOVStreamReaderDelegateDeprecated, NSObject>

@optional

- (unsigned int)pixelFormatForUnknownTrackOfReader:(MOVStreamReader *)arg1;
- (bool)reader:(MOVStreamReader *)arg1 alwaysCopiesSampleDataForStream:(NSString *)arg2;
- (void)reader:(MOVStreamReader *)arg1 didReceiveWarning:(NSError *)arg2;
- (id)reader:(MOVStreamReader *)arg1 overrideBytesPerRowForStream:(NSString *)arg2 storedValue:(id)arg3 customTrackMetadata:(NSDictionary *)arg4 originalPixelFormat:(unsigned int)arg5 encodedPixelFormat:(unsigned int)arg6;
- (unsigned int)reader:(MOVStreamReader *)arg1 pixelFormatForStream:(NSString *)arg2 suggestedFormat:(unsigned int)arg3;

@end
