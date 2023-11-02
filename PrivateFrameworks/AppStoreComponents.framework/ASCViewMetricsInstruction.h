
@interface ASCViewMetricsInstruction : NSObject <NSCopying, NSSecureCoding> {
    ASCMetricsData * _data;
    NSSet * _invocationPoints;
}

@property (nonatomic, readonly, copy) ASCMetricsData *data;
@property (nonatomic, readonly, copy) NSSet *invocationPoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 invocationPoints:(id)arg2;
- (id)invocationPoints;
- (bool)isEqual:(id)arg1;

@end
