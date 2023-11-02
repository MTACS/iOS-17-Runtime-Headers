
@interface REImageImage : REImage {
    UIImage * _uiImage;
}

@property (nonatomic, retain) UIImage *uiImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUiImage:(id)arg1;
- (id)uiImage;

@end
