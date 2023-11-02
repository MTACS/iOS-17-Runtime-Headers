
@interface WiFiAwareDataSessionIssueReport : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _rtpSequenceNumber;
    NSNumber * _rtpStartTime;
}

@property (nonatomic, copy) NSNumber *rtpSequenceNumber;
@property (nonatomic, copy) NSNumber *rtpStartTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rtpSequenceNumber;
- (bool)rtpSequenceNumberEquals:(id)arg1;
- (id)rtpStartTime;
- (bool)rtpStartTimeEquals:(id)arg1;
- (void)setRtpSequenceNumber:(id)arg1;
- (void)setRtpStartTime:(id)arg1;

@end
