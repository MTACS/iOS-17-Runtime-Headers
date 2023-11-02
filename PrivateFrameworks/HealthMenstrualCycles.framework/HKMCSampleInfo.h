
@interface HKMCSampleInfo : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    long long  _anchor;
    long long  _dataType;
    bool  _deleted;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly) long long anchor;
@property (nonatomic, readonly) long long dataType;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (long long)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnchor:(long long)arg1 UUID:(id)arg2 dataType:(long long)arg3 deleted:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;

@end
