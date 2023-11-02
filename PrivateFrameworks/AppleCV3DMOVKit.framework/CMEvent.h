
@interface CMEvent : NSObject <NSSecureCoding> {
    unsigned long long  _eventType;
    NSString * _peerDisplayName;
    double  _timestamp;
    NSUUID * _uuid;
}

@property (nonatomic) unsigned long long eventType;
@property (nonatomic, retain) NSString *peerDisplayName;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)peerDisplayName;
- (void)setEventType:(unsigned long long)arg1;
- (void)setPeerDisplayName:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUuid:(id)arg1;
- (double)timestamp;
- (id)uuid;

@end
