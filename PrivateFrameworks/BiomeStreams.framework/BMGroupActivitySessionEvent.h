
@interface BMGroupActivitySessionEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _activityID;
    NSString * _activitySessionID;
    NSString * _experienceType;
    bool  _isActive;
    NSArray * _memberHandles;
    NSString * _messagesChatGuid;
    NSArray * _participantHandles;
    NSString * _sourceBundleID;
}

@property (nonatomic, readonly, copy) NSString *activityID;
@property (nonatomic, readonly, copy) NSString *activitySessionID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *experienceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly, copy) NSArray *memberHandles;
@property (nonatomic, readonly, copy) NSString *messagesChatGuid;
@property (nonatomic, readonly, copy) NSArray *participantHandles;
@property (nonatomic, readonly, copy) NSString *sourceBundleID;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)activityID;
- (id)activitySessionID;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)experienceType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIsActive:(bool)arg1 sourceBundleID:(id)arg2 activitySessionID:(id)arg3 activityID:(id)arg4 messagesChatGuid:(id)arg5 participantHandles:(id)arg6 memberHandles:(id)arg7 experienceType:(id)arg8;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)memberHandles;
- (id)messagesChatGuid;
- (id)participantHandles;
- (id)proto;
- (id)serialize;
- (id)sourceBundleID;

@end
