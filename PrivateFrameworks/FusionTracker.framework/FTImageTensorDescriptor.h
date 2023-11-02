
@interface FTImageTensorDescriptor : NSObject {
    NSString * _name;
    unsigned int  _pixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

+ (id)bgraImageWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)bgraSquareImageWithName:(id)arg1 size:(double)arg2;
+ (id)descriptorWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned int)arg3;

- (void).cxx_destruct;
- (id)name;
- (unsigned int)pixelFormat;
- (void)setName:(id)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
