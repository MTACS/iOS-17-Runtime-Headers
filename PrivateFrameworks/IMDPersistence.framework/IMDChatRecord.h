
@interface IMDChatRecord : IMDRecord <IMDBridgedRecord>

@property (nonatomic, readonly, copy) NSString *accountID;
@property (nonatomic, readonly, copy) NSString *accountLogin;
@property (getter=isArchived, nonatomic, readonly) bool archived;
@property (getter=isBlackholed, nonatomic, readonly) bool blackholed;
@property (nonatomic, readonly, copy) NSString *chatIdentifier;
@property (nonatomic, readonly) long long ckSyncState;
@property (nonatomic, readonly, copy) NSString *cloudKitRecordID;
@property (nonatomic, readonly, copy) NSString *cloudRecordID;
@property (nonatomic, readonly, copy) NSString *cloudServerChangeToken;
@property (nonatomic, readonly) long long cloudSyncState;
@property (nonatomic, readonly, copy) NSString *cloudkitRecordID;
@property (getter=isDeletingIncomingMessages, nonatomic, readonly) bool deletingIncomingMessages;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (nonatomic, readonly, copy) NSString *guid;
@property (nonatomic, readonly) NSArray *handleRecords;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *lastAddressedHandle;
@property (nonatomic, readonly, copy) NSString *lastAddressedSIMID;
@property (nonatomic, readonly, copy) NSString *lastAddressedSimID;
@property (nonatomic, readonly) IMDMessageRecord *lastMessageRecord;
@property (nonatomic, readonly, copy) NSString *originalGroupID;
@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (nonatomic, readonly) long long rawSyndicationDate;
@property (getter=isRecovered, nonatomic, readonly) bool recovered;
@property (nonatomic, readonly, copy) NSString *roomName;
@property (nonatomic, readonly) long long rowID;
@property (nonatomic, readonly, copy) NSString *serverChangeToken;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly) unsigned char style;
@property (nonatomic, readonly) bool successfulQuery;
@property (nonatomic, readonly, copy) NSDate *syndicationDate;
@property (nonatomic, readonly) long long syndicationType;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)keyPathsToColumns;

- (unsigned long long)_cfTypeID;
- (void*)_fetchUpdatedRecord;
- (struct __CFArray { }*)_localCache;
- (struct { char *x1; long long x2; struct { /* ? */ } *x3; unsigned int x4; void *x5; })_propertyDescriptorForProperty:(long long)arg1;
- (int)_propertyIDForProperty:(long long)arg1;
- (struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; struct __CFArray {} *x4; long long x5; struct _IMDMessageRecordStruct {} *x6; long long x7; }*)cfChatRecord;
- (id)cloudKitRecordID;
- (id)cloudRecordID;
- (id)cloudServerChangeToken;
- (long long)cloudSyncState;
- (id)groupName;
- (id)handleRecords;
- (id)identifier;
- (id)init;
- (id)lastAddressedSIMID;
- (id)lastMessageRecord;
- (id)properties;
- (long long)rowID;

@end
