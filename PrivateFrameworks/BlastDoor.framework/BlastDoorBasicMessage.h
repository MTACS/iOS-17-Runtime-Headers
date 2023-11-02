
@interface BlastDoorBasicMessage : NSObject {
    void basicMessage;
}

@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;

- (void).cxx_destruct;
- (id)content;
- (id)description;
- (id)init;
- (id)participantDestinationIdentifiers;
- (id)plainTextBody;
- (id)plainTextSubject;

@end
