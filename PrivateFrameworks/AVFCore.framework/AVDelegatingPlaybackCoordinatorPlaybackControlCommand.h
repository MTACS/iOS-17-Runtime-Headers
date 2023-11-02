
@interface AVDelegatingPlaybackCoordinatorPlaybackControlCommand : NSObject

@property (nonatomic, readonly) NSString *expectedCurrentItemIdentifier;
@property (nonatomic, readonly) AVCoordinatedPlaybackParticipant *originator;

- (id)expectedCurrentItemIdentifier;
- (id)init;
- (id)initInternal;
- (id)originator;

@end
