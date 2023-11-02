
@interface CXJoinCallActivitySession : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    CXJoinCallActivity * _activity;
    unsigned long long  _state;
    NSDate * _timestamp;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) CXJoinCallActivity *activity;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)activity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToJoinCallActivitySession:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUUID:(id)arg1;
- (unsigned long long)state;
- (id)timestamp;

@end
