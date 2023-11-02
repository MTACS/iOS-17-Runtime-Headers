
@interface HMDCharacteristicResponseNotificationContext : HMFObject {
    NSSet * _changedCharacteristics;
    NSDictionary * _notificationPayloadByAccessoryUUID;
    bool  _pendingMultiPartResponses;
    NSUUID * _requestIdentifier;
    NSSet * _responseCharacteristics;
}

@property (readonly, copy) NSSet *changedCharacteristics;
@property (readonly, copy) NSDictionary *notificationPayloadByAccessoryUUID;
@property (getter=hasPendingMultiPartResponses, readonly) bool pendingMultiPartResponses;
@property (readonly, copy) NSUUID *requestIdentifier;
@property (readonly, copy) NSSet *responseCharacteristics;

+ (id)notificationUpdateMessagePayloadForHome:(id)arg1 notificationEnabled:(bool)arg2 characteristics:(id)arg3 characteristicsErrorsMap:(id)arg4;
+ (id)responsePayloadForHome:(id)arg1 changedAccessories:(id)arg2 moreMessagesInMultipart:(id)arg3;
+ (id)updateMultipleCharacteristicReadWriteResponsePayload:(id)arg1 withUnhandledRequests:(id)arg2;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)changedCharacteristics;
- (bool)hasPendingMultiPartResponses;
- (id)initWithRequestIdentifier:(id)arg1 responses:(id)arg2 pendingMultiPartResponses:(bool)arg3;
- (id)notificationPayloadByAccessoryUUID;
- (id)notificationWithHome:(id)arg1;
- (id)requestIdentifier;
- (id)responseCharacteristics;

@end
