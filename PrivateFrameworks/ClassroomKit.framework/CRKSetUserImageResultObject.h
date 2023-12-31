
@interface CRKSetUserImageResultObject : CATTaskResultObject {
    NSString * _imageIdentifier;
}

@property (nonatomic, copy) NSString *imageIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)setImageIdentifier:(id)arg1;

@end
