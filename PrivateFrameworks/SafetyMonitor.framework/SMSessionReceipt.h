
@interface SMSessionReceipt : NSObject <NSSecureCoding> {
    NSDate * _endTime;
    bool  _readStatus;
    NSArray * _receiverHandles;
    NSUUID * _sessionID;
    unsigned long long  _sessionType;
    NSDate * _startTime;
}

@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) bool readStatus;
@property (nonatomic, readonly) NSArray *receiverHandles;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic, readonly) unsigned long long sessionType;
@property (nonatomic, readonly) NSDate *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1 sessionType:(unsigned long long)arg2 sessionStartTime:(id)arg3 sessionEndTime:(id)arg4 receiverHandles:(id)arg5 safetyCacheReadStaus:(bool)arg6;
- (bool)readStatus;
- (id)receiverHandles;
- (id)sessionID;
- (unsigned long long)sessionType;
- (id)startTime;

@end
