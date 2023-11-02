
@interface _UIImageSerializationWrapper : NSObject <NSSecureCoding> {
    UIImage * _image;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;

@end
