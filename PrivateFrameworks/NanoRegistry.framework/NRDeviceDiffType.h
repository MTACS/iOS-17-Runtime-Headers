
@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _changeType;
    NRDeviceDiff * _diff;
}

@property (nonatomic, readonly) unsigned long long changeType;
@property (nonatomic, readonly) NRDeviceDiff *diff;
@property (nonatomic, readonly) NRPBDeviceDiffType *protobuf;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diff;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;

@end
