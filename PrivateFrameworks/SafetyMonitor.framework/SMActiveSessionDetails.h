
@interface SMActiveSessionDetails : NSObject <NSSecureCoding> {
    NSUUID * _activeDeviceIdentifier;
    NSDate * _cacheReleasedDate;
    NSArray * _receiverHandles;
    NSString * _scheduledSendGUID;
    NSUUID * _sessionID;
}

@property (nonatomic, readonly) NSUUID *activeDeviceIdentifier;
@property (nonatomic, readonly) NSDate *cacheReleasedDate;
@property (nonatomic, readonly) NSArray *receiverHandles;
@property (nonatomic, readonly) NSString *scheduledSendGUID;
@property (nonatomic, readonly) NSUUID *sessionID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDeviceIdentifier;
- (id)cacheReleasedDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1 activeDeviceIdentifier:(id)arg2 cacheReleasedDate:(id)arg3 scheduledSendGUID:(id)arg4 receiverHandles:(id)arg5;
- (id)receiverHandles;
- (id)scheduledSendGUID;
- (id)sessionID;

@end
