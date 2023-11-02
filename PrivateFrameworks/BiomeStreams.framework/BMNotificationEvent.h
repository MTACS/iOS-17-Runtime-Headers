
@interface BMNotificationEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    unsigned long long  _badge;
    NSString * _bundleID;
    NSString * _categoryID;
    NSArray * _contactIDs;
    NSString * _deviceID;
    bool  _isGroupMessage;
    NSString * _notificationID;
    NSString * _sectionID;
    NSString * _subtitle;
    NSString * _threadID;
    NSString * _title;
    NSString * _uniqueID;
    unsigned long long  _usageType;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) unsigned long long badge;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *categoryID;
@property (nonatomic, readonly) NSArray *contactIDs;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isGroupMessage;
@property (nonatomic, readonly) NSString *notificationID;
@property (nonatomic, readonly) NSString *sectionID;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *threadID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) unsigned long long usageType;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (unsigned long long)badge;
- (id)bundleID;
- (id)categoryID;
- (id)contactIDs;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceID;
- (id)encodeAsProto;
- (id)init;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueID:(id)arg1 absoluteTimestamp:(double)arg2 usageType:(unsigned long long)arg3 bundleID:(id)arg4 notificationID:(id)arg5 deviceID:(id)arg6 title:(id)arg7 subtitle:(id)arg8 badge:(unsigned long long)arg9 threadID:(id)arg10 categoryID:(id)arg11 sectionID:(id)arg12 contactIDs:(id)arg13 isGroupMessage:(bool)arg14;
- (bool)isEqual:(id)arg1;
- (bool)isGroupMessage;
- (id)notificationID;
- (id)proto;
- (id)sectionID;
- (id)serialize;
- (id)subtitle;
- (id)threadID;
- (id)title;
- (id)uniqueID;
- (unsigned long long)usageType;

@end
