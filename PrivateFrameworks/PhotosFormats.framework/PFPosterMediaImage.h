
@interface PFPosterMediaImage : PFPosterMedia <NSCopying, NSSecureCoding> {
    NSString * _imageName;
}

@property (nonatomic, retain) NSString *imageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImageName:(id)arg1;

@end
