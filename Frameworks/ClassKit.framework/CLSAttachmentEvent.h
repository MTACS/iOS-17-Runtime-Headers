
@interface CLSAttachmentEvent : CLSInsightEvent {
    NSString * _attachmentID;
    NSString * _classID;
    long long  _contextType;
    int  _handoutAttachmentType;
    NSString * _handoutID;
    NSString * _recipientPersonID;
}

@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic, copy) NSString *attachmentID;
@property (nonatomic, copy) NSString *classID;
@property (nonatomic) long long contextType;
@property (nonatomic) int handoutAttachmentType;
@property (nonatomic, copy) NSString *handoutID;
@property (nonatomic, copy) NSString *recipientPersonID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentID;
- (id)classID;
- (long long)contextType;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)handoutAttachmentType;
- (id)handoutID;
- (id)initWithAttachmentID:(id)arg1 classID:(id)arg2 handoutID:(id)arg3 eventType:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)recipientPersonID;
- (void)setAppIdentifier:(id)arg1;
- (void)setAttachmentID:(id)arg1;
- (void)setClassID:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setHandoutAttachmentType:(int)arg1;
- (void)setHandoutID:(id)arg1;
- (void)setRecipientPersonID:(id)arg1;
- (bool)validateObject:(id*)arg1;

@end
