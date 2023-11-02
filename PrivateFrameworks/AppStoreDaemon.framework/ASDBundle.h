
@interface ASDBundle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *identifier;

+ (id)bundleWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
