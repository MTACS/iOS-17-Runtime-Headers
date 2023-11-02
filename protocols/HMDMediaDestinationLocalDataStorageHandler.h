
@protocol HMDMediaDestinationLocalDataStorageHandler

@required

- (void)updateAudioGroupIdentifier:(NSUUID *)arg1;
- (void)updateDestinationSupportOptions:(unsigned long long)arg1;
- (void)updateMediaDestination:(HMMediaDestination *)arg1;

@end
