
@interface BlastDoorEditMessageCommand : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  editMessageCommand;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long editType;
@property (nonatomic, readonly) NSString *editedMessageGUID;
@property (nonatomic, readonly) BlastDoorMessageContent *editedMessagePartBody;
@property (nonatomic, readonly) long long editedMessagePartIndex;
@property (nonatomic, readonly) bool has_editedMessagePartIndex;
@property (nonatomic, readonly) bool has_shouldRetractSubject;
@property (nonatomic, readonly) BlastDoorMessageContent *messageContent;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) bool shouldRetractSubject;

- (void).cxx_destruct;
- (id)description;
- (long long)editType;
- (id)editedMessageGUID;
- (id)editedMessagePartBody;
- (long long)editedMessagePartIndex;
- (bool)has_editedMessagePartIndex;
- (bool)has_shouldRetractSubject;
- (id)init;
- (id)messageContent;
- (id)metadata;
- (bool)shouldRetractSubject;

@end
