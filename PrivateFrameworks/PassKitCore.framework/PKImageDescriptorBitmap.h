
@interface PKImageDescriptorBitmap : PKImageDescriptor {
    PKImage * _image;
    NSData * _imageHash;
}

@property (nonatomic, readonly) PKImage *image;

+ (id)createForImage:(id)arg1 withTintColor:(long long)arg2;
+ (id)createForImage:(id)arg1 withTintColor:(long long)arg2 hasBackground:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;

@end
