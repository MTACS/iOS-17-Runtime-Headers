
@interface WFImageIcon : WFIcon {
    WFImage * _image;
}

@property (nonatomic, readonly) WFImage *image;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
