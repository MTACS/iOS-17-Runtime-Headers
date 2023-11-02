
@interface CLSHandoutEvent : CLSInsightEvent {
    NSArray * _attachmentDetails;
    NSString * _classID;
    NSDate * _dueDate;
    NSString * _handoutID;
    NSArray * _recipientIDs;
}

@property (nonatomic, copy) NSArray *attachmentDetails;
@property (nonatomic, copy) NSString *classID;
@property (nonatomic, retain) NSDate *dueDate;
@property (nonatomic, copy) NSString *handoutID;
@property (nonatomic, copy) NSArray *recipientIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentDetails;
- (id)classID;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (void)encodeWithCoder:(id)arg1;
- (id)handoutID;
- (id)initWithClassID:(id)arg1 handoutID:(id)arg2 eventType:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)recipientIDs;
- (void)setAttachmentDetails:(id)arg1;
- (void)setClassID:(id)arg1;
- (void)setDueDate:(id)arg1;
- (void)setHandoutID:(id)arg1;
- (void)setRecipientIDs:(id)arg1;
- (bool)validateObject:(id*)arg1;

@end
