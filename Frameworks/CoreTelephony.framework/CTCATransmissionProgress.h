
@interface CTCATransmissionProgress : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _estimatedDurationSeconds;
    NSString * _messageId;
    long long  _payloadType;
    NSNumber * _progressPercents;
    NSDate * _startedAt;
}

@property (nonatomic, retain) NSNumber *estimatedDurationSeconds;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic) long long payloadType;
@property (nonatomic, retain) NSNumber *progressPercents;
@property (nonatomic, retain) NSDate *startedAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedDurationSeconds;
- (id)initWithCoder:(id)arg1;
- (id)messageId;
- (long long)payloadType;
- (id)progressPercents;
- (void)setEstimatedDurationSeconds:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setPayloadType:(long long)arg1;
- (void)setProgressPercents:(id)arg1;
- (void)setStartedAt:(id)arg1;
- (id)startedAt;

@end
