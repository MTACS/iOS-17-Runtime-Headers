
@interface HKOntologyVersion : NSObject <NSCopying, NSSecureCoding> {
    NSString * _string;
}

@property (nonatomic, readonly, copy) NSString *string;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initEmptyVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithShardEntries:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEmptyVersion;
- (bool)isEqual:(id)arg1;
- (id)string;

@end
