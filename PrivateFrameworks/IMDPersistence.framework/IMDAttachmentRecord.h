
@interface IMDAttachmentRecord : IMDRecord <IMDBridgedRecord>

@property (nonatomic, readonly, copy) NSDictionary *attributionInfo;
@property (nonatomic, readonly, copy) NSString *ckRecordID;
@property (nonatomic, readonly, copy) NSData *ckServerChangeTokenBlob;
@property (nonatomic, readonly) long long ckSyncState;
@property (nonatomic, readonly, copy) NSString *cloudRecordID;
@property (nonatomic, readonly, copy) NSData *cloudServerChangeToken;
@property (nonatomic, readonly) long long cloudSyncState;
@property (getter=isCommSafetySensitive, nonatomic, readonly) bool commSafetySensitive;
@property (nonatomic, readonly, copy) NSDate *createdDate;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly, copy) NSString *guid;
@property (nonatomic, readonly) IMDMessageRecord *messageRecord;
@property (nonatomic, readonly, copy) NSString *originalGUID;
@property (getter=isOutgoing, nonatomic, readonly) bool outgoing;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (getter=isSticker, nonatomic, readonly) bool sticker;
@property (nonatomic, readonly) long long totalBytes;
@property (nonatomic, readonly, copy) NSString *transferName;
@property (nonatomic, readonly) long long transferState;
@property (nonatomic, readonly, copy) NSString *uti;
@property (nonatomic, readonly, copy) NSString *utiString;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)keyPathsToColumns;

- (unsigned long long)_cfTypeID;
- (void*)_fetchUpdatedRecord;
- (struct __CFArray { }*)_localCache;
- (struct { char *x1; long long x2; struct { /* ? */ } *x3; unsigned int x4; void *x5; })_propertyDescriptorForProperty:(long long)arg1;
- (int)_propertyIDForProperty:(long long)arg1;
- (id)attributionInfo;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)cfAttachmentRecord;
- (id)cloudRecordID;
- (id)cloudServerChangeToken;
- (long long)cloudSyncState;
- (id)init;
- (bool)isCommSafetySensitive;
- (id)messageRecord;
- (id)path;
- (long long)rowID;
- (id)utiString;

@end
