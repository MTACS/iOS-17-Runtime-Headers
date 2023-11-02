
@protocol MOVStreamWriterDeprecationNominates <NSObject>

@required

- (unsigned long long)fifoBufferCapacity;
- (unsigned long long)fifoBufferSizeForStream:(NSString *)arg1;
- (bool)legacyKeysMode;
- (bool)relateStream:(NSString *)arg1 toStream:(NSString *)arg2 relationSpecifier:(NSString *)arg3;
- (void)setFifoBufferCapacity:(unsigned long long)arg1;
- (void)setLegacyKeysMode:(bool)arg1;
- (bool)setTrackMetadata:(NSDictionary *)arg1 forMetadataStream:(NSString *)arg2;
- (bool)setTrackMetadata:(NSDictionary *)arg1 forStream:(NSString *)arg2;

@end
