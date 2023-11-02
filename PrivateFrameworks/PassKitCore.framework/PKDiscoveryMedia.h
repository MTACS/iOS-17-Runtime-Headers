
@interface PKDiscoveryMedia : NSObject <NSSecureCoding> {
    PKColor * _backgroundColor;
    double  _height;
    NSURL * _localAssetURL;
    NSString * _passKitUIImageName;
    long long  _type;
    NSDictionary * _urls;
    double  _width;
}

@property (nonatomic, readonly) PKColor *backgroundColor;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) NSURL *localAssetURL;
@property (nonatomic, readonly) NSString *passKitUIImageName;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDictionary *urls;
@property (nonatomic, readonly) double width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_remoteAssetForScale:(double)arg1;
- (id)backgroundColor;
- (id)description;
- (void)downloadImageDataWithScale:(double)arg1 shouldWriteData:(bool)arg2 completion:(id /* block */)arg3;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)height;
- (id)imageDataFromCacheWithScale:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localAssetURL;
- (id)passKitUIImageName;
- (long long)type;
- (id)urls;
- (double)width;

@end
