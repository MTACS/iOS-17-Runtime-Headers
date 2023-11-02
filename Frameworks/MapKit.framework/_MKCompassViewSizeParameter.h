
@interface _MKCompassViewSizeParameter : NSObject {
    double  _diameter;
    UIFont * _font;
    NSString * _imageNamePart;
}

@property (nonatomic) double diameter;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *imageNamePart;

- (void).cxx_destruct;
- (double)diameter;
- (id)font;
- (id)imageNamePart;
- (void)setDiameter:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setImageNamePart:(id)arg1;

@end
