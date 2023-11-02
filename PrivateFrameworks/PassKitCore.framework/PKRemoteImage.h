
@interface PKRemoteImage : NSObject <NSCopying, NSSecureCoding> {
    double  _height;
    NSURL * _remoteURL;
    unsigned long long  _scaleFactor;
    double  _width;
}

@property (nonatomic) double height;
@property (nonatomic, retain) NSURL *remoteURL;
@property (nonatomic) unsigned long long scaleFactor;
@property (nonatomic) double width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchImageWithCompletion:(id /* block */)arg1;
- (unsigned long long)hash;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRemoteURL:(id)arg1 scaleFactor:(unsigned long long)arg2;
- (id)initWithRemoteURL:(id)arg1 scaleFactor:(unsigned long long)arg2 width:(double)arg3 height:(double)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteImage:(id)arg1;
- (id)remoteURL;
- (unsigned long long)scaleFactor;
- (void)setHeight:(double)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setScaleFactor:(unsigned long long)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
