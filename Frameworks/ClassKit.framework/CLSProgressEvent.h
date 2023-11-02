
@interface CLSProgressEvent : CLSInsightEvent {
    NSString * _activityID;
    CLSActivityReportItem * _activityItemInfo;
    NSString * _attachmentID;
    NSString * _classID;
    long long  _contextType;
    int  _handoutAttachmentType;
    NSString * _handoutAuthorizedObjectID;
    NSString * _handoutID;
    NSString * _objectIDPath;
    NSString * _primaryActivityItemIdentifier;
    CLSRange * _rangeInfo;
    NSString * _recipientPersonID;
    CLSTimeInterval * _timeIntervalInfo;
}

@property (nonatomic, copy) NSString *activityID;
@property (nonatomic, copy) CLSActivityReportItem *activityItemInfo;
@property (nonatomic, copy) NSString *appIdentifier;
@property (nonatomic, copy) NSString *attachmentID;
@property (nonatomic, copy) NSString *classID;
@property (nonatomic) long long contextType;
@property (nonatomic) int handoutAttachmentType;
@property (nonatomic, copy) NSString *handoutAuthorizedObjectID;
@property (nonatomic, copy) NSString *handoutID;
@property (nonatomic, copy) NSString *objectIDPath;
@property (nonatomic, copy) NSString *primaryActivityItemIdentifier;
@property (nonatomic, copy) CLSRange *rangeInfo;
@property (nonatomic, copy) NSString *recipientPersonID;
@property (nonatomic, retain) CLSTimeInterval *timeIntervalInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityID;
- (id)activityItemInfo;
- (id)attachmentID;
- (id)classID;
- (long long)contextType;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)handoutAttachmentType;
- (id)handoutAuthorizedObjectID;
- (id)handoutID;
- (id)initWithAttachmentID:(id)arg1 classID:(id)arg2 handoutID:(id)arg3 eventType:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (void)mergeWithObject:(id)arg1;
- (id)objectIDPath;
- (id)primaryActivityItemIdentifier;
- (id)rangeInfo;
- (id)recipientPersonID;
- (void)setActivityID:(id)arg1;
- (void)setActivityItemInfo:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAttachmentID:(id)arg1;
- (void)setClassID:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setHandoutAttachmentType:(int)arg1;
- (void)setHandoutAuthorizedObjectID:(id)arg1;
- (void)setHandoutID:(id)arg1;
- (void)setObjectIDPath:(id)arg1;
- (void)setPrimaryActivityItemIdentifier:(id)arg1;
- (void)setRangeInfo:(id)arg1;
- (void)setRecipientPersonID:(id)arg1;
- (void)setTimeIntervalInfo:(id)arg1;
- (id)timeIntervalInfo;
- (bool)validateObject:(id*)arg1;

@end
