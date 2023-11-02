
@interface BlastDoorUnsupportedMessage : NSObject {
    void unsupportedMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)participantDestinationIdentifiers;

@end
