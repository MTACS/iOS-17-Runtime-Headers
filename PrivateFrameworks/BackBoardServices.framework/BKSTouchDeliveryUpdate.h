
@interface BKSTouchDeliveryUpdate : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _contextID;
    bool  _isDetached;
    int  _pid;
    unsigned int  _touchIdentifier;
    long long  _type;
}

@property (nonatomic) unsigned int contextID;
@property (nonatomic) bool isDetached;
@property (nonatomic) int pid;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDetached;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (void)setContextID:(unsigned int)arg1;
- (void)setIsDetached:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setTouchIdentifier:(unsigned int)arg1;
- (void)setType:(long long)arg1;
- (unsigned int)touchIdentifier;
- (long long)type;

@end
