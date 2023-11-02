
@interface PCNativeAssetInfo : NSObject <NSSecureCoding> {
    bool  _autoloop;
    double  _bitrate;
    long long  _contentType;
    long long  _height;
    long long  _length;
    NSURL * _url;
    long long  _width;
}

@property (nonatomic) bool autoloop;
@property (nonatomic) double bitrate;
@property (nonatomic) long long contentType;
@property (nonatomic) long long height;
@property (nonatomic) long long length;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic) long long width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)autoloop;
- (double)bitrate;
- (long long)contentType;
- (void)encodeWithCoder:(id)arg1;
- (long long)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)length;
- (void)setAutoloop:(bool)arg1;
- (void)setBitrate:(double)arg1;
- (void)setContentType:(long long)arg1;
- (void)setHeight:(long long)arg1;
- (void)setLength:(long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setWidth:(long long)arg1;
- (id)url;
- (long long)width;

@end
