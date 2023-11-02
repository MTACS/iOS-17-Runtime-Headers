
@interface CTStewieRequestContext : NSObject <NSCopying, NSSecureCoding> {
    NSData * _epki;
    NSDictionary * _metadata;
    long long  _reason;
    NSData * _shared;
}

@property (nonatomic, retain) NSData *epki;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) long long reason;
@property (nonatomic, retain) NSData *shared;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)epki;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequestContext:(id)arg1;
- (id)metadata;
- (long long)reason;
- (void)setEpki:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setReason:(long long)arg1;
- (void)setShared:(id)arg1;
- (id)shared;

@end
