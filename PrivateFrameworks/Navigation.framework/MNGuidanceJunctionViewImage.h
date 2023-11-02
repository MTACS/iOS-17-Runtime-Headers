
@interface MNGuidanceJunctionViewImage : NSObject <NSSecureCoding> {
    NSData * _imageData;
    unsigned long long  _imageID;
}

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) unsigned long long imageID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (unsigned long long)imageID;
- (id)initWithCoder:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageID:(unsigned long long)arg1;

@end
