
@protocol HMDMediaDestinationManager

@required

- (HMMediaDestination *)committedDestination;
- (HMMediaDestination *)destination;
- (NSUUID *)identifier;
- (void)mergeDestination:(HMMediaDestination *)arg1;
- (HMDMediaDestinationMessageHandler *)messageHandler;
- (void)requestToUpdateAudioGroupIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stageAudioGroupIdentifier:(NSUUID *)arg1;

@end
