
@interface DIImageInfoParams : DIBaseParams {
    bool  _extraInfo;
    NSDictionary * _imageInfo;
    bool  _openEncryption;
}

@property bool extraInfo;
@property (nonatomic, copy) NSDictionary *imageInfo;
@property bool openEncryption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)extraInfo;
- (id)imageInfo;
- (id)initWithExistingParams:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)openEncryption;
- (bool)retrieveWithError:(id*)arg1;
- (void)setExtraInfo:(bool)arg1;
- (void)setImageInfo:(id)arg1;
- (void)setOpenEncryption:(bool)arg1;

@end
