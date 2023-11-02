
@interface BMNotificationUsage : BMEventBase <BMStoreData> {
    unsigned long long  _badge;
    NSString * _body;
    NSString * _bundleID;
    NSString * _categoryID;
    NSArray * _contactIDs;
    NSString * _deviceID;
    bool  _hasBadge;
    bool  _hasIsGroupMessage;
    bool  _hasRaw_absoluteTimestamp;
    bool  _isGroupMessage;
    NSString * _notificationID;
    double  _raw_absoluteTimestamp;
    NSString * _sectionID;
    NSString * _subtitle;
    NSString * _threadID;
    NSString * _title;
    NSString * _uniqueID;
    int  _usageType;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) unsigned long long badge;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *categoryID;
@property (nonatomic, readonly) NSArray *contactIDs;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic) bool hasBadge;
@property (nonatomic) bool hasIsGroupMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isGroupMessage;
@property (nonatomic, readonly) NSString *notificationID;
@property (nonatomic, readonly) NSString *sectionID;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *threadID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) int usageType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_contactIDsJSONArray;
- (id)absoluteTimestamp;
- (unsigned long long)badge;
- (id)body;
- (id)bundleID;
- (id)categoryID;
- (id)contactIDs;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceID;
- (bool)hasBadge;
- (bool)hasIsGroupMessage;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueID:(id)arg1 absoluteTimestamp:(id)arg2 usageType:(int)arg3 bundleID:(id)arg4 notificationID:(id)arg5 deviceID:(id)arg6 title:(id)arg7 subtitle:(id)arg8 body:(id)arg9 badge:(id)arg10 threadID:(id)arg11 categoryID:(id)arg12 sectionID:(id)arg13 contactIDs:(id)arg14 isGroupMessage:(id)arg15;
- (bool)isEqual:(id)arg1;
- (bool)isGroupMessage;
- (id)jsonDictionary;
- (id)notificationID;
- (id)sectionID;
- (id)serialize;
- (void)setHasBadge:(bool)arg1;
- (void)setHasIsGroupMessage:(bool)arg1;
- (id)subtitle;
- (id)threadID;
- (id)title;
- (id)uniqueID;
- (int)usageType;
- (void)writeTo:(id)arg1;

@end
