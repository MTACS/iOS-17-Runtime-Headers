
@protocol HMMediaDestination <NSObject>

@required

- (NSString *)audioDestinationIdentifier;
- (NSString *)audioDestinationName;
- (long long)audioDestinationType;
- (bool)supportsAudioDestination;
- (bool)supportsAudioGroup;

@end
