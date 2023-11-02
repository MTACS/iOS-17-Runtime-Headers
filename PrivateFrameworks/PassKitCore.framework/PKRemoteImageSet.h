
@interface PKRemoteImageSet : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _images;
    NSString * _name;
}

@property (nonatomic, retain) NSSet *images;
@property (nonatomic, retain) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addURL:(id)arg1 forScaleFactor:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageForScaleFactor:(unsigned long long)arg1;
- (id)imageForScaleFactorValue:(double)arg1;
- (id)images;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 dictionaries:(id)arg2;
- (id)initWithName:(id)arg1 images:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteImageSet:(id)arg1;
- (id)name;
- (void)setImages:(id)arg1;
- (void)setName:(id)arg1;

@end
