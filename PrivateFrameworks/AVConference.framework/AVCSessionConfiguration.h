
@interface AVCSessionConfiguration : NSObject <NSCopying> {
    NSUUID * _conversationID;
    NSDate * _conversationTimeBase;
    NSDate * _conversationTimeBaseTruncated;
    bool  _oneToOneModeEnabled;
    bool  _outOfProcessCodecsEnabled;
    NSObject<OS_nw_activity> * _parentNWActivity;
    bool  _remoteScreenControlEnabled;
    NSObject<NSCopying> * _reportingHierarchyToken;
    NSString * _serviceName;
    long long  _sessionMode;
}

@property (nonatomic, copy) NSUUID *conversationID;
@property (nonatomic, copy) NSDate *conversationTimeBase;
@property (nonatomic, copy) NSDate *conversationTimeBaseTruncated;
@property (getter=isOneToOneModeEnabled, nonatomic) bool oneToOneModeEnabled;
@property (nonatomic) bool outOfProcessCodecsEnabled;
@property (setter=setParentNWActivity:, nonatomic) NSObject<OS_nw_activity> *parentNWActivity;
@property (getter=isRemoteScreenControlEnabled, nonatomic) bool remoteScreenControlEnabled;
@property (nonatomic, copy) NSObject<NSCopying> *reportingHierarchyToken;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) long long sessionMode;

+ (long long)clientSessionModeWithSessionMode:(long long)arg1;
+ (long long)sessionModeWithClientSessionMode:(long long)arg1;
+ (id)stringFromSessionMode:(long long)arg1;

- (void)cleanupNwActivity;
- (id)conversationID;
- (id)conversationTimeBase;
- (id)conversationTimeBaseTruncated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deserializeNwActivity:(id)arg1;
- (id)dictionary;
- (bool)isOneToOneModeEnabled;
- (bool)isRemoteScreenControlEnabled;
- (bool)outOfProcessCodecsEnabled;
- (id)parentNWActivity;
- (id)reportingHierarchyToken;
- (id)serializeNwActivity:(id)arg1;
- (id)serviceName;
- (long long)sessionMode;
- (void)setConversationID:(id)arg1;
- (void)setConversationTimeBase:(id)arg1;
- (void)setConversationTimeBaseTruncated:(id)arg1;
- (void)setOneToOneModeEnabled:(bool)arg1;
- (void)setOutOfProcessCodecsEnabled:(bool)arg1;
- (void)setParentNWActivity:(id)arg1;
- (void)setRemoteScreenControlEnabled:(bool)arg1;
- (void)setReportingHierarchyToken:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSessionMode:(long long)arg1;
- (void)setUpWithDictionary:(id)arg1;

@end
