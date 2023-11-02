
@interface CTRoadsideProviders : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _providers;
}

@property (nonatomic, retain) NSDictionary *providers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProviders:(id)arg1;
- (id)providers;
- (void)setProviders:(id)arg1;

@end
