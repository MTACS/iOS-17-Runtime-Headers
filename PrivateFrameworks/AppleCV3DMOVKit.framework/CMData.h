
@interface CMData : NSObject <NSSecureCoding> {
    NSData * _additionalData;
    NSData * _data;
    bool  _isSent;
    NSString * _sourcePeerDisplayName;
    double  _timestamp;
    long long  _type;
}

@property (nonatomic, retain) NSData *additionalData;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) bool isSent;
@property (nonatomic, retain) NSString *sourcePeerDisplayName;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 timestamp:(double)arg2 isSent:(bool)arg3;
- (bool)isSent;
- (void)setAdditionalData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setSourcePeerDisplayName:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (id)sourcePeerDisplayName;
- (double)timestamp;
- (long long)type;

@end
