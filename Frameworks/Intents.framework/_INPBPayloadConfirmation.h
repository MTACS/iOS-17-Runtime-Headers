
@interface _INPBPayloadConfirmation : PBCodable <NSCopying, NSSecureCoding, _INPBPayloadConfirmation> {
    int  _addTasksIntentTargetTaskListConfirmationReason;
    _INPBSelectionItem * _confirmationItem;
    struct { 
        unsigned int sendAnnouncementIntentAnnouncementConfirmationReason : 1; 
        unsigned int startCallIntentContactsConfirmationReason : 1; 
        unsigned int reason : 1; 
        unsigned int addTasksIntentTargetTaskListConfirmationReason : 1; 
    }  _has;
    int  _reason;
    int  _sendAnnouncementIntentAnnouncementConfirmationReason;
    int  _startCallIntentContactsConfirmationReason;
}

@property (nonatomic) int addTasksIntentTargetTaskListConfirmationReason;
@property (nonatomic, retain) _INPBSelectionItem *confirmationItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAddTasksIntentTargetTaskListConfirmationReason;
@property (nonatomic, readonly) bool hasConfirmationItem;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSendAnnouncementIntentAnnouncementConfirmationReason;
@property (nonatomic) bool hasStartCallIntentContactsConfirmationReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) int reason;
@property (nonatomic) int sendAnnouncementIntentAnnouncementConfirmationReason;
@property (nonatomic) int startCallIntentContactsConfirmationReason;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (int)StringAsSendAnnouncementIntentAnnouncementConfirmationReason:(id)arg1;
- (int)StringAsStartCallIntentContactsConfirmationReason:(id)arg1;
- (int)addTasksIntentTargetTaskListConfirmationReason;
- (id)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)arg1;
- (id)confirmationItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAddTasksIntentTargetTaskListConfirmationReason;
- (bool)hasConfirmationItem;
- (bool)hasReason;
- (bool)hasSendAnnouncementIntentAnnouncementConfirmationReason;
- (bool)hasStartCallIntentContactsConfirmationReason;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (int)sendAnnouncementIntentAnnouncementConfirmationReason;
- (id)sendAnnouncementIntentAnnouncementConfirmationReasonAsString:(int)arg1;
- (void)setAddTasksIntentTargetTaskListConfirmationReason:(int)arg1;
- (void)setConfirmationItem:(id)arg1;
- (void)setHasAddTasksIntentTargetTaskListConfirmationReason:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSendAnnouncementIntentAnnouncementConfirmationReason:(bool)arg1;
- (void)setHasStartCallIntentContactsConfirmationReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setSendAnnouncementIntentAnnouncementConfirmationReason:(int)arg1;
- (void)setStartCallIntentContactsConfirmationReason:(int)arg1;
- (int)startCallIntentContactsConfirmationReason;
- (id)startCallIntentContactsConfirmationReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
