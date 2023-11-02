
@protocol MPMutablePlaybackArchive <NSObject>

@required

- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setDisplayProperties:(MPPlaybackArchiveDisplayProperties *)arg1;
- (void)setFallbackStoreIdentifier:(NSString *)arg1;
- (void)setSessionIdentifier:(NSString *)arg1 type:(NSString *)arg2 data:(NSData *)arg3;
- (void)setSupportedOptions:(unsigned long long)arg1;
- (void)setType:(long long)arg1;

@end
