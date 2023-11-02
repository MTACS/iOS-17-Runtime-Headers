
@interface CTIPFilterEndpoint : NSObject <NSCopying, NSSecureCoding> {
    NSString * _addr;
    NSNumber * _maskLen;
    NSNumber * _port;
    NSNumber * _portRange;
}

@property (nonatomic, retain) NSString *addr;
@property (nonatomic, retain) NSNumber *maskLen;
@property (nonatomic, retain) NSNumber *port;
@property (nonatomic, retain) NSNumber *portRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addr;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maskLen;
- (id)port;
- (id)portRange;
- (void)setAddr:(id)arg1;
- (void)setMaskLen:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setPortRange:(id)arg1;

@end
