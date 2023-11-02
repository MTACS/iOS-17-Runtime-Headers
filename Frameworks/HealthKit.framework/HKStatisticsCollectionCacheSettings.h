
@interface HKStatisticsCollectionCacheSettings : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _mode;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long mode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 mode:(long long)arg2;
- (long long)mode;

@end
