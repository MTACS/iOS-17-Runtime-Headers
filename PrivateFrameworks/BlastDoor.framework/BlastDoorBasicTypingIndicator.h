
@interface BlastDoorBasicTypingIndicator : NSObject {
    void basicTypingIndicator;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)isFinished;
- (id)participantDestinationIdentifiers;

@end
