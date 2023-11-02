
@interface CTIPFilter : NSObject <NSCopying, NSSecureCoding> {
    CTIPFilterEndpoint * _dst;
    unsigned long long  _filterId;
    NSNumber * _flowLabel;
    unsigned long long  _ipFamilyProtocol;
    unsigned long long  _ipProtocol;
    unsigned long long  _precedence;
    CTIPFilterEndpoint * _src;
    NSNumber * _tos;
    NSNumber * _tosMask;
}

@property (nonatomic, retain) CTIPFilterEndpoint *dst;
@property (nonatomic) unsigned long long filterId;
@property (nonatomic, retain) NSNumber *flowLabel;
@property (nonatomic) unsigned long long ipFamilyProtocol;
@property (nonatomic) unsigned long long ipProtocol;
@property (nonatomic, readonly) bool isAnyIpFamilyProtocol;
@property (nonatomic, readonly) bool isAnyIpProtocol;
@property (nonatomic, readonly) bool isIpv4;
@property (nonatomic, readonly) bool isIpv6;
@property (nonatomic, readonly) bool isTcp;
@property (nonatomic, readonly) bool isUdp;
@property (nonatomic) unsigned long long precedence;
@property (nonatomic, retain) CTIPFilterEndpoint *src;
@property (nonatomic, retain) NSNumber *tos;
@property (nonatomic, retain) NSNumber *tosMask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dst;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterId;
- (id)flowLabel;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)ipFamilyProtocol;
- (unsigned long long)ipProtocol;
- (bool)isAnyIpFamilyProtocol;
- (bool)isAnyIpProtocol;
- (bool)isIpv4;
- (bool)isIpv6;
- (bool)isTcp;
- (bool)isUdp;
- (unsigned long long)precedence;
- (void)setDst:(id)arg1;
- (void)setFilterId:(unsigned long long)arg1;
- (void)setFlowLabel:(id)arg1;
- (void)setIpFamilyProtocol:(unsigned long long)arg1;
- (void)setIpProtocol:(unsigned long long)arg1;
- (void)setPrecedence:(unsigned long long)arg1;
- (void)setSrc:(id)arg1;
- (void)setTos:(id)arg1;
- (void)setTosMask:(id)arg1;
- (id)src;
- (id)tos;
- (id)tosMask;

@end
