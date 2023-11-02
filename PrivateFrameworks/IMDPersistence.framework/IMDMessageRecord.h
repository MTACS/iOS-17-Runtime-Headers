
@interface IMDMessageRecord : IMDRecord <IMDBridgedRecord>

@property (getter=isArchive, nonatomic, readonly) bool archive;
@property (getter=isArchived, nonatomic, readonly) bool archived;
@property (getter=isAssociatedMessage, nonatomic, readonly) bool associatedMessage;
@property (nonatomic, readonly, copy) NSString *associatedMessageGUID;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSArray *attachmentRecords;
@property (nonatomic, readonly, copy) NSData *attributedBodyData;
@property (nonatomic, readonly, copy) NSAttributedString *attributedBodyText;
@property (getter=isAudioMessage, nonatomic, readonly) bool audioMessage;
@property (getter=isAutoReply, nonatomic, readonly) bool autoReply;
@property (nonatomic, readonly) bool cacheHasAttachments;
@property (nonatomic, readonly) IMDChatRecord *chatRecord;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, copy) NSDate *dateDelivered;
@property (nonatomic, readonly, copy) NSDate *dateEdited;
@property (nonatomic, readonly) NSDate *datePlayed;
@property (nonatomic, readonly, copy) NSDate *dateRead;
@property (getter=isDelayed, nonatomic, readonly) bool delayed;
@property (getter=isDelivered, nonatomic, readonly) bool delivered;
@property (getter=isEmote, nonatomic, readonly) bool emote;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, copy) NSString *fallbackHash;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (getter=isForward, nonatomic, readonly) bool forward;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly, copy) NSString *guid;
@property (nonatomic, readonly) IMDHandleRecord *handleRecord;
@property (nonatomic, readonly) bool hasDataDetectorResults;
@property (nonatomic, readonly) bool hasDdResults;
@property (nonatomic, readonly) long long itemType;
@property (getter=isPlayed, nonatomic, readonly) bool played;
@property (getter=isPrepared, nonatomic, readonly) bool prepared;
@property (nonatomic, readonly) long long rawDate;
@property (nonatomic, readonly) long long rawDateDelivered;
@property (nonatomic, readonly) long long rawDatePlayed;
@property (nonatomic, readonly) long long rawDateRead;
@property (getter=isRead, nonatomic, readonly) bool read;
@property (getter=isReply, nonatomic, readonly) bool reply;
@property (nonatomic, readonly) long long rowID;
@property (getter=isSent, nonatomic, readonly) bool sent;
@property (nonatomic, readonly, copy) NSString *service;
@property (getter=isServiceMessage, nonatomic, readonly) bool serviceMessage;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (getter=isSystemMessage, nonatomic, readonly) bool systemMessage;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly, copy) NSString *threadOriginatorGUID;
@property (nonatomic, readonly) bool wasDataDetected;
@property (nonatomic, readonly) bool wasDeduplicated;
@property (nonatomic, readonly) bool wasDowngraded;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)keyPathsToColumns;

- (unsigned long long)_cfTypeID;
- (void*)_fetchUpdatedRecord;
- (struct __CFArray { }*)_localCache;
- (struct { char *x1; long long x2; struct { /* ? */ } *x3; unsigned int x4; void *x5; })_propertyDescriptorForProperty:(long long)arg1;
- (int)_propertyIDForProperty:(long long)arg1;
- (id)attachmentRecords;
- (id)attributedBodyData;
- (id)attributedBodyText;
- (struct _IMDMessageRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; struct _IMDHandleRecordStruct {} *x4; struct _IMDHandleRecordStruct {} *x5; struct __CFArray {} *x6; struct __CFDictionary {} *x7; }*)cfMessageRecord;
- (id)chatRecord;
- (id)dateEdited;
- (id)handleRecord;
- (bool)hasDataDetectorResults;
- (id)init;
- (id)initWithItemType:(long long)arg1 text:(id)arg2 date:(long long)arg3 dateRead:(long long)arg4 dateDelivered:(long long)arg5 datePlayed:(long long)arg6 error:(long long)arg7 type:(long long)arg8 replaceID:(long long)arg9 flags:(id)arg10 guid:(id)arg11 attributedBody:(id)arg12 service:(id)arg13 account:(id)arg14 accountGUID:(id)arg15 subject:(id)arg16 handleID:(id)arg17 countryCode:(id)arg18 unformattedID:(id)arg19 otherHandleID:(id)arg20 groupTitle:(id)arg21 groupActionType:(long long)arg22 shareStatus:(long long)arg23 shareDirection:(long long)arg24 expireState:(long long)arg25 messageActionType:(long long)arg26 associatedMessageGUID:(id)arg27 associatedMessageType:(long long)arg28 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg29 balloonBundleID:(id)arg30 payloadData:(id)arg31 expressiveSendStyleID:(id)arg32 timeExpressiveSendPlayed:(long long)arg33 messageSummaryInfo:(id)arg34 cloudKitSyncState:(long long)arg35 cloudKitRecordID:(id)arg36 cloudKitServerChangeTokenBlob:(id)arg37 cloudKitRecordChangeTag:(id)arg38 dataDetectorsInfo:(id)arg39 destinationCallerID:(id)arg40 replyToGUID:(id)arg41 sortID:(long long)arg42 threadOriginatorGUID:(id)arg43 threadOriginatorPart:(id)arg44 syndicationRanges:(id)arg45 syncedSyndicationRanges:(id)arg46 partCount:(long long)arg47 dateEdited:(long long)arg48 biaReferenceID:(id)arg49 fallbackHash:(id)arg50;
- (bool)isArchived;
- (bool)isAssociatedMessage;
- (bool)isReply;
- (long long)rawDateEdited;
- (long long)rowID;
- (id)serviceName;

@end
