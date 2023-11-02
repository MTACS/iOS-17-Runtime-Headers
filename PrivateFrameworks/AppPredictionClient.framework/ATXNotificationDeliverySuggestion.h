
@interface ATXNotificationDeliverySuggestion : NSObject <ATXProtoBufWrapper, BMStoreData, NSCopying, NSSecureCoding> {
    NSString * _entityIdentifier;
    long long  _scope;
    id  _subObject;
    long long  _subtype;
    NSDate * _timestamp;
    NSUUID * _triggerNotificationUUID;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entityIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long scope;
@property (nonatomic, readonly) id subObject;
@property (nonatomic, readonly) long long subtype;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, copy) NSUUID *triggerNotificationUUID;
@property (nonatomic, readonly, copy) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)entityIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initPromotingSuggestionWithUUID:(id)arg1 scope:(long long)arg2 entityIdentifier:(id)arg3 timestamp:(id)arg4 triggerNotificationUUID:(id)arg5;
- (id)initQuietingSuggestionWithUUID:(id)arg1 scope:(long long)arg2 entityIdentifier:(id)arg3 timestamp:(id)arg4 triggerNotificationUUID:(id)arg5;
- (id)initSendToDigestSuggestionWithUUID:(id)arg1 bundleID:(id)arg2 timestamp:(id)arg3 triggerNotificationUUID:(id)arg4;
- (id)initSendToMessagesDigestSuggestionWithUUID:(id)arg1 bundleID:(id)arg2 timestamp:(id)arg3 triggerNotificationUUID:(id)arg4;
- (id)initTurnOffNotificationsForAppSuggestionWithUUID:(id)arg1 bundleID:(id)arg2 timestamp:(id)arg3 triggerNotificationUUID:(id)arg4;
- (id)initUrgencyTuningSuggestionWithUUID:(id)arg1 bundleID:(id)arg2 timestamp:(id)arg3 triggerNotificationUUID:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterruptionManagerTuningSuggestion:(id)arg1 scope:(long long)arg2 entityIdentifier:(id)arg3 uuid:(id)arg4 timestamp:(id)arg5 triggerNotificationUUID:(id)arg6;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSmartPauseSuggestion:(id)arg1 uuid:(id)arg2 scope:(long long)arg3 entityIdentifier:(id)arg4 timestamp:(id)arg5 triggerNotificationUUID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXNotificationDeliverySuggestion:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)proto;
- (long long)scope;
- (id)serialize;
- (void)setScope:(long long)arg1;
- (void)setTriggerNotificationUUID:(id)arg1;
- (id)subObject;
- (long long)subtype;
- (id)timestamp;
- (id)triggerNotificationUUID;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)feedbackKey;

@end
