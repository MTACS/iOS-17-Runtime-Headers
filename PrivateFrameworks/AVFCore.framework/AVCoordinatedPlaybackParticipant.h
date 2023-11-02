
@interface AVCoordinatedPlaybackParticipant : NSObject {
    NSUUID * _identifier;
    bool  _readyToPlay;
    NSArray * _suspensionReasons;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=isReadyToPlay, nonatomic, readonly) bool readyToPlay;
@property (nonatomic, readonly) NSArray *suspensionReasons;

- (void)dealloc;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithParticipantIdentifier:(id)arg1 readyToPlay:(bool)arg2 suspensionReasons:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isReadyToPlay;
- (id)suspensionReasons;

@end
