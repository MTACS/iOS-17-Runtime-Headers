
@interface CSAttSiriRequestContext : NSObject <NSSecureCoding> {
    unsigned long long  _reqSrc;
}

@property (nonatomic) unsigned long long reqSrc;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestSource:(unsigned long long)arg1;
- (unsigned long long)reqSrc;
- (void)setReqSrc:(unsigned long long)arg1;

@end
