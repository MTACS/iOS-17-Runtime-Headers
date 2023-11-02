
@interface BMPostSiriEngagementEvent : BMEventBase <BMStoreData> {
    NSString * _UISessionID;
    NSString * _conversationPath;
    bool  _hasIsUserAbandoned;
    bool  _hasIsUserCancelled;
    bool  _hasTaskSuccess;
    bool  _isUserAbandoned;
    bool  _isUserCancelled;
    NSArray * _pseEvents;
    NSString * _taskID;
    int  _taskSuccess;
    NSString * _taskType;
}

@property (nonatomic, readonly) NSString *UISessionID;
@property (nonatomic, readonly) NSString *conversationPath;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsUserAbandoned;
@property (nonatomic) bool hasIsUserCancelled;
@property (nonatomic) bool hasTaskSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUserAbandoned;
@property (nonatomic, readonly) bool isUserCancelled;
@property (nonatomic, readonly) NSArray *pseEvents;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *taskID;
@property (nonatomic, readonly) int taskSuccess;
@property (nonatomic, readonly) NSString *taskType;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)UISessionID;
- (id)conversationPath;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsUserAbandoned;
- (bool)hasIsUserCancelled;
- (bool)hasTaskSuccess;
- (id)initByReadFrom:(id)arg1;
- (id)initWithUISessionID:(id)arg1 taskID:(id)arg2 taskType:(id)arg3 conversationPath:(id)arg4 taskSuccess:(int)arg5 isUserAbandoned:(bool)arg6 isUserCancelled:(bool)arg7 pseEvents:(id)arg8;
- (id)initWithUISessionId:(id)arg1 domain:(id)arg2 action:(id)arg3 isPostSiriEngagement:(bool)arg4 pseDeltaDuration:(double)arg5 pseDeltaSinceUIStart:(double)arg6 pseDeltaSinceUIEnd:(double)arg7 pseContents:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isUserAbandoned;
- (bool)isUserCancelled;
- (id)pseEvents;
- (id)serialize;
- (void)setHasIsUserAbandoned:(bool)arg1;
- (void)setHasIsUserCancelled:(bool)arg1;
- (void)setHasTaskSuccess:(bool)arg1;
- (id)taskID;
- (int)taskSuccess;
- (id)taskType;
- (void)writeTo:(id)arg1;

@end
