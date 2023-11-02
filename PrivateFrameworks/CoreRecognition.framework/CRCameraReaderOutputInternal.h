
@interface CRCameraReaderOutputInternal : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSString * _capturePath;
    NSNumber * _dayValue;
    NSString * _formattedStringValue;
    UIImage * _imageValue;
    NSNumber * _monthValue;
    NSAttributedString * _overlayString;
    float  _rotation;
    NSString * _stringValue;
    NSArray * _targetVertices;
    NSString * _type;
    NSArray * _vertices;
    NSNumber * _yearValue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  boundingBox;
    NSAttributedString * overlayString;
    float  rotation;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (retain) NSString *capturePath;
@property (retain) NSNumber *dayValue;
@property (retain) NSString *formattedStringValue;
@property (retain) UIImage *imageValue;
@property (retain) NSNumber *monthValue;
@property (retain) NSAttributedString *overlayString;
@property float rotation;
@property (retain) NSString *stringValue;
@property (retain) NSArray *targetVertices;
@property (retain) NSString *type;
@property (retain) NSArray *vertices;
@property (retain) NSNumber *yearValue;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)capturePath;
- (id)dayValue;
- (id)formattedStringValue;
- (id)imageValue;
- (id)monthValue;
- (id)overlayString;
- (float)rotation;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCapturePath:(id)arg1;
- (void)setDayValue:(id)arg1;
- (void)setFormattedStringValue:(id)arg1;
- (void)setImageValue:(id)arg1;
- (void)setMonthValue:(id)arg1;
- (void)setOverlayString:(id)arg1;
- (void)setRotation:(float)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTargetVertices:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVertices:(id)arg1;
- (void)setYearValue:(id)arg1;
- (id)stringValue;
- (id)targetVertices;
- (id)type;
- (id)vertices;
- (id)yearValue;

@end
