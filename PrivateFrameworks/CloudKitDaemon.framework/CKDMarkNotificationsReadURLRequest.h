
@interface CKDMarkNotificationsReadURLRequest : CKDURLRequest {
    NSArray * _notificationIDs;
    NSMutableDictionary * _notificationIDsByRequestID;
    id /* block */  _notificationMarkedReadProgressBlock;
}

@property (nonatomic, retain) NSArray *notificationIDs;
@property (nonatomic, retain) NSMutableDictionary *notificationIDsByRequestID;
@property (nonatomic, copy) id /* block */ notificationMarkedReadProgressBlock;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 notificationIDsToMarkRead:(id)arg2;
- (id)notificationIDs;
- (id)notificationIDsByRequestID;
- (id /* block */)notificationMarkedReadProgressBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setNotificationIDs:(id)arg1;
- (void)setNotificationIDsByRequestID:(id)arg1;
- (void)setNotificationMarkedReadProgressBlock:(id /* block */)arg1;
- (id)zoneIDsToLock;

@end
