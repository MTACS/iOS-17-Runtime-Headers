
@interface ICEvernoteResource : NSObject <NSSecureCoding> {
    NSData * _data;
    double  _duration;
    NSString * _fileName;
    double  _imageHeight;
    double  _imageWidth;
    bool  _isAttachment;
    NSString * _mime;
    NSString * _sha256Hash;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic) double imageHeight;
@property (nonatomic) double imageWidth;
@property (nonatomic) bool isAttachment;
@property (nonatomic, copy) NSString *mime;
@property (nonatomic, copy) NSString *sha256Hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (double)imageHeight;
- (double)imageWidth;
- (id)initWithCoder:(id)arg1;
- (bool)isAttachment;
- (id)mime;
- (void)setData:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFileName:(id)arg1;
- (void)setImageHeight:(double)arg1;
- (void)setImageWidth:(double)arg1;
- (void)setIsAttachment:(bool)arg1;
- (void)setMime:(id)arg1;
- (void)setSha256Hash:(id)arg1;
- (id)sha256Hash;

@end
