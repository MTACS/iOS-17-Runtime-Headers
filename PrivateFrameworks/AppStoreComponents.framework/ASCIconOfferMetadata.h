
@interface ASCIconOfferMetadata : ASCOfferMetadata {
    NSString * _animationName;
    NSString * _baseImageName;
}

@property (nonatomic, readonly, copy) NSString *animationName;
@property (nonatomic, readonly, copy) NSString *baseImageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)animationName;
- (id)baseImageName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageNameForSize:(id)arg1;
- (id)initWithBaseImageName:(id)arg1 animationName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIcon;

@end
