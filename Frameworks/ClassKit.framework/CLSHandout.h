
@interface CLSHandout : CLSAbstractHandout <CLSCollaborationStateRepresentable, CLSMutableAssetAdopter, CLSRelationable> {
    NSDate * _dateLastReviewed;
    NSDate * _dueDate;
    unsigned long long  _flags;
    NSString * _instructions;
    NSError * _publishError;
    long long  _publishingState;
    bool  _reviewed;
    long long  _state;
    unsigned long long  _substate;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSArray *attachmentCollaborationStates;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *collaborationStates;
@property (nonatomic, retain) NSDate *dateLastReviewed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLSClass *effectiveClass;
@property (nonatomic) unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastReviewedDate;
@property (nonatomic, retain) NSError *publishError;
@property (nonatomic) long long publishingState;
@property (nonatomic, readonly) NSArray *recipients;
@property (getter=isReviewed, nonatomic) bool reviewed;
@property (nonatomic, retain) CLSSchedule *schedule;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long substate;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)new;
+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_adjustPublishingStateIfNeeded;
- (id)_init;
- (void)addAsset:(id)arg1;
- (void)addHandoutAttachment:(id)arg1;
- (void)addHandoutRecipient:(id)arg1;
- (id)attachmentCollaborationStates;
- (id)attachments;
- (id)collaborationStates;
- (id)dateLastReviewed;
- (id)description;
- (id)dictionaryRepresentation;
- (id)effectiveClass;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isReviewed;
- (id)lastReviewedDate;
- (void)mergeWithObject:(id)arg1;
- (id)publishError;
- (long long)publishingState;
- (id)recipients;
- (void)removeAsset:(id)arg1;
- (void)removeHandoutAttachment:(id)arg1;
- (void)removeHandoutRecipient:(id)arg1;
- (id)schedule;
- (void)setDateLastReviewed:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setLastReviewedDate:(id)arg1;
- (void)setPublishError:(id)arg1;
- (void)setPublishingState:(long long)arg1;
- (void)setReviewed:(bool)arg1;
- (void)setSchedule:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubstate:(unsigned long long)arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (unsigned long long)substate;
- (long long)type;
- (bool)validateObject:(id*)arg1;

@end
