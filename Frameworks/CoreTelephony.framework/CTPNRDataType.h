
@interface CTPNRDataType : NSObject <NSCopying, NSSecureCoding> {
    NSString * _destAddr;
    long long  _pnrMechanism;
    NSString * _svcCenterAddr;
}

@property (nonatomic, retain) NSString *destAddr;
@property (nonatomic) long long pnrMechanism;
@property (nonatomic, retain) NSString *svcCenterAddr;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destAddr;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTPNRDataType:(id)arg1;
- (long long)pnrMechanism;
- (void)setDestAddr:(id)arg1;
- (void)setPnrMechanism:(long long)arg1;
- (void)setSvcCenterAddr:(id)arg1;
- (id)svcCenterAddr;

@end
