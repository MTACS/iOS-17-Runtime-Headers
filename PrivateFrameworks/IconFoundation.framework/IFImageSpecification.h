
@interface IFImageSpecification : NSObject {
    IFImageSpecification * _largerSpecification;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelsSize;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    IFImageSpecification * _smallerSpecification;
    NSSet * _tags;
}

@property (nonatomic, retain) IFImageSpecification *largerSpecification;
@property (readonly) struct CGSize { double x1; double x2; } pixelsSize;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) IFImageSpecification *smallerSpecification;
@property (readonly) NSSet *tags;

- (void).cxx_destruct;
- (id)description;
- (double)dimension;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 tags:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToImageSpecification:(id)arg1;
- (id)largerSpecification;
- (struct CGSize { double x1; double x2; })minimumSize;
- (struct CGSize { double x1; double x2; })pixelSize;
- (struct CGSize { double x1; double x2; })pixelsSize;
- (double)scale;
- (void)setLargerSpecification:(id)arg1;
- (void)setSmallerSpecification:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)smallerSpecification;
- (id)tags;

@end
