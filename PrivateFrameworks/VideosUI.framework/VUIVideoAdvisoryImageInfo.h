
@interface VUIVideoAdvisoryImageInfo : NSObject {
    NSString * _format;
    unsigned long long  _height;
    NSString * _imageURL;
    unsigned long long  _width;
}

@property (nonatomic, copy) NSString *format;
@property (nonatomic) unsigned long long height;
@property (nonatomic, retain) NSString *imageURL;
@property (nonatomic) unsigned long long width;

- (void).cxx_destruct;
- (id)format;
- (unsigned long long)height;
- (id)imageURL;
- (void)setFormat:(id)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setImageURL:(id)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
