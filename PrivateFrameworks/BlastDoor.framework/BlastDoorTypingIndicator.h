
@interface BlastDoorTypingIndicator : NSObject {
    void typingIndicator;
}

@property (nonatomic, readonly) NSString *balloonPluginBundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorTypingIndicator_Icon *icon;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)balloonPluginBundleID;
- (id)description;
- (id)icon;
- (id)init;
- (bool)isFinished;
- (id)participantDestinationIdentifiers;

@end
