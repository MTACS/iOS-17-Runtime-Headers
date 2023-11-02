
@protocol HMMediaSystemDelegate <HMMediaObjectDelegate>

@optional

- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateApplicationData:(HMApplicationData *)arg2;
- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateComponents:(NSArray *)arg2;
- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateConfiguredName:(NSString *)arg2;
- (void)mediaSystem:(HMMediaSystem *)arg1 didUpdateName:(NSString *)arg2;
- (void)mediaSystemDidUpdateAudioDestination:(HMMediaSystem *)arg1;

@end
