
@interface PFAuxiliaryImageRecord : NSObject {
    NSDictionary * _auxiliaryImageInfo;
    NSString * _identifier;
    unsigned int  _sourceImageOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _sourceImageSize;
}

@property (retain) NSDictionary *auxiliaryImageInfo;
@property (retain) NSString *identifier;
@property unsigned int sourceImageOrientation;
@property struct CGSize { double x1; double x2; } sourceImageSize;

- (void).cxx_destruct;
- (id)auxiliaryImageInfo;
- (double)effectiveScaleFactorForDestinationImageSize:(struct CGSize { double x1; double x2; })arg1;
- (id)identifier;
- (void)setAuxiliaryImageInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSourceImageOrientation:(unsigned int)arg1;
- (void)setSourceImageSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned int)sourceImageOrientation;
- (struct CGSize { double x1; double x2; })sourceImageSize;
- (double)sourceImageSizeMaxLength;

@end
