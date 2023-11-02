
@interface ATXNotificationsRecord : NSObject {
    NSDate * _activatedTime;
    NSString * _appName;
    NSString * _categoryID;
    NSDate * _creationTime;
    ATXNotificationContext * _ctx;
    long long  _endingInteraction;
    bool  _finished;
    bool  _hidden;
    unsigned long long  _incomingFeed;
    NSString * _message;
    NSString * _notificationId;
    NSNumber * _numSuppActions;
    long long  _outcome;
    NSDate * _publicationDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _stream;
    NSString * _subtitle;
    NSNumber * _timezone;
    NSString * _title;
    NSDate * _unlockedTime;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSDate *creationTime;
@property (nonatomic, retain) ATXNotificationContext *ctx;
@property (nonatomic, retain) NSString *notificationId;
@property (nonatomic, retain) NSMutableArray *stream;

+ (bool)isNotificationMetadataFromLockscreen:(id)arg1;
+ (id)serializeMetadata:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (bool)addEvent:(id)arg1;
- (id)appName;
- (id)creationTime;
- (id)ctx;
- (long long)determineEndingInteraction;
- (long long)determineOutcome;
- (long long)findNextEventInStreamAndRecordTime:(id)arg1 forType:(long long)arg2;
- (long long)getEndingInteraction;
- (long long)getOutcome;
- (id)getSerializedMetadata;
- (bool)hasDeviceStateChanged:(long long)arg1;
- (bool)hasGivenEventType:(long long)arg1;
- (bool)hasOrbed;
- (bool)hasTappedCoalesceAndIsTopOfPile;
- (id)init;
- (id)initWithATXNotificationsInterface:(id)arg1 notificationID:(id)arg2 timestamp:(id)arg3 motion:(id)arg4;
- (id)initWithSerializedMetadata:(id)arg1 notificationID:(id)arg2 timestamp:(id)arg3;
- (bool)isCleared;
- (bool)isEngagement;
- (bool)isExpired;
- (bool)isIgnored;
- (bool)isOnLockscreen;
- (id)json:(bool)arg1;
- (id)message;
- (id)messageWithGrade:(id)arg1 userid:(id)arg2;
- (id)notificationId;
- (id)pbmsg;
- (id)pbmsgWithGrade:(id)arg1 userId:(id)arg2;
- (void)setAppName:(id)arg1;
- (void)setCreationTime:(id)arg1;
- (void)setCtx:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setStream:(id)arg1;
- (void)start;
- (id)stream;

@end
