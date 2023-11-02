
@interface BMSharePlayGroupActivitySession : BMEventBase <BMStoreData> {
    NSString * _activityID;
    NSString * _activitySessionID;
    NSString * _experienceType;
    bool  _hasIsActive;
    bool  _isActive;
    NSArray * _memberHandles;
    NSString * _messagesChatGUID;
    NSArray * _participantHandles;
    NSString * _sourceBundleID;
}

@property (nonatomic, readonly) NSString *activityID;
@property (nonatomic, readonly) NSString *activitySessionID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *experienceType;
@property (nonatomic) bool hasIsActive;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) NSArray *memberHandles;
@property (nonatomic, readonly) NSString *messagesChatGUID;
@property (nonatomic, readonly) NSArray *participantHandles;
@property (nonatomic, readonly) NSString *sourceBundleID;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_memberHandlesJSONArray;
- (id)_participantHandlesJSONArray;
- (id)activityID;
- (id)activitySessionID;
- (unsigned int)dataVersion;
- (id)description;
- (id)experienceType;
- (bool)hasIsActive;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsActive:(id)arg1 sourceBundleID:(id)arg2 activitySessionID:(id)arg3 activityID:(id)arg4 messagesChatGUID:(id)arg5 experienceType:(id)arg6 participantHandles:(id)arg7 memberHandles:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)memberHandles;
- (id)messagesChatGUID;
- (id)participantHandles;
- (id)serialize;
- (void)setHasIsActive:(bool)arg1;
- (id)sourceBundleID;
- (void)writeTo:(id)arg1;

@end
