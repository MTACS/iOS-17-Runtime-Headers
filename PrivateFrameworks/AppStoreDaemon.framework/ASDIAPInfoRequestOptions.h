
@interface ASDIAPInfoRequestOptions : ASDRequestOptions {
    NSArray * _adamIds;
}

@property (nonatomic, readonly) NSArray *adamIds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdamIds:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
