
@protocol HMMTagSessionProcessing <NSObject>

@required

- (void)closeForReason:(unsigned long long)arg1;
- (bool)isActive;
- (long long)lastUpdate;
- (void)setLastUpdate:(long long)arg1;
- (NSDictionary *)tagProcessingBlocks;

@end
