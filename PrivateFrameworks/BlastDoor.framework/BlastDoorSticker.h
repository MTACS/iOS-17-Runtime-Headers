
@interface BlastDoorSticker : NSObject {
    void sticker;
}

@property (nonatomic, readonly) NSString *associatedMessageFallbackHash;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_associatedMessageRange;
@property (nonatomic, readonly) BlastDoorMessage *messageContent;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;

- (void).cxx_destruct;
- (id)associatedMessageFallbackHash;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (id)description;
- (bool)has_associatedMessageRange;
- (id)init;
- (id)messageContent;
- (id)participantDestinationIdentifiers;

@end
