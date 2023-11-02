
@interface REAccessoryImage : NSObject <NSCoding, NSCopying> {
    REImage * _image;
}

@property (nonatomic, copy) REImage *image;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImage:(id)arg1;

@end
