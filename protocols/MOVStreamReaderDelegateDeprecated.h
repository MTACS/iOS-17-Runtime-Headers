
@protocol MOVStreamReaderDelegateDeprecated <NSObject>

@optional

- (unsigned int)reader:(MOVStreamReader *)arg1 bytesPerRowForStream:(NSString *)arg2 storedValue:(unsigned int)arg3;
- (void)reader:(MOVStreamReader *)arg1 readUnknownMetadataList:(NSArray *)arg2 associatedTo:(NSString *)arg3 inTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4;
- (bool)readerReadMetadata:(MOVStreamReader *)arg1;

@end
