
@protocol RCMutableFolder <RCFolder>

@required

- (void)addRecording:(id <RCRecording>)arg1;
- (NSString *)name;
- (long long)rank;
- (void)removeRecording:(id <RCRecording>)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRank:(long long)arg1;

@end
