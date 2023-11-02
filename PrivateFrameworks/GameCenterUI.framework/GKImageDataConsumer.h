
@interface GKImageDataConsumer : NSObject <GKResourceDataConsumer> {
    bool  _isLayeredImage;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLayeredImage;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 isLayeredImage:(bool)arg3;
- (bool)isLayeredImage;
- (id)objectForData:(id)arg1 error:(id*)arg2;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
