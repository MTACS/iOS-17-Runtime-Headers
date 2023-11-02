
@interface ASKImageDataConsumer : NSObject <ASKResourceDataConsumer> {
    bool  _isLayeredImage;
    long long  _renderIntent;
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
@property (nonatomic, readonly) long long renderIntent;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 isLayeredImage:(bool)arg3 renderIntent:(long long)arg4;
- (bool)isLayeredImage;
- (id)objectForData:(id)arg1 error:(id*)arg2;
- (long long)renderIntent;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
