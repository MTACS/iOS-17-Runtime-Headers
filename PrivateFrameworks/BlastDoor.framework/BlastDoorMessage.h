
@interface BlastDoorMessage : NSObject {
    void message;
}

@property (nonatomic, readonly) NSArray *attributionInfo;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;

- (void).cxx_destruct;
- (id)attributionInfo;
- (id)content;
- (id)description;
- (id)init;
- (id)participantDestinationIdentifiers;
- (id)plainTextBody;
- (id)plainTextSubject;

@end
