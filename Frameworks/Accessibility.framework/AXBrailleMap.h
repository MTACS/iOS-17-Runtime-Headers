
@interface AXBrailleMap : NSObject <NSCopying, NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _dimensions;
    CIImage * _presentedImage;
    NSMutableDictionary * _values;
}

@property (nonatomic) struct CGSize { double x1; double x2; } dimensions;

+ (id)connectedBrailleMap;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGSize { double x1; double x2; })dimensions;
- (void)encodeWithCoder:(id)arg1;
- (float)heightAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)presentImage:(struct CGImage { }*)arg1;
- (id)presentedImage;
- (void)setDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeight:(float)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
