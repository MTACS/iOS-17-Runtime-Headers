
@interface AXAuditContrastInput : NSObject {
    NSString * _backgroundHexColorValue;
    double  _displayScaleFactor;
    bool  _enhanced;
    double  _fontSize;
    NSString * _foregroundHexColorValue;
    NSString * _identifier;
    NSData * _imageData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageFrame;
}

@property (nonatomic, retain) NSString *backgroundHexColorValue;
@property (nonatomic) double displayScaleFactor;
@property (nonatomic) bool enhanced;
@property (nonatomic) double fontSize;
@property (nonatomic, retain) NSString *foregroundHexColorValue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageFrame;

- (void).cxx_destruct;
- (id)backgroundHexColorValue;
- (id)description;
- (double)displayScaleFactor;
- (bool)enhanced;
- (double)fontSize;
- (id)foregroundHexColorValue;
- (id)identifier;
- (id)imageData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrame;
- (id)init;
- (void)setBackgroundHexColorValue:(id)arg1;
- (void)setDisplayScaleFactor:(double)arg1;
- (void)setEnhanced:(bool)arg1;
- (void)setFontSize:(double)arg1;
- (void)setForegroundHexColorValue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
