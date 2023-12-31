
@protocol VCMediaStreamSyncDestination <NSObject>

@required

- (bool)startSynchronization:(id <VCMediaStreamSyncSource>)arg1;
- (void)stopSynchronization;

@end
