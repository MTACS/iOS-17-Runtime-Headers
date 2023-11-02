
@interface VUINamedLayerImage : NSObject <UINamedLayerImage> {
    int  _blendMode;
    UIImage * _decodedImage;
    NSObject<UINamedLayerImage> * _namedLayerImage;
}

@property (nonatomic) int blendMode;
@property (nonatomic, readonly) <UINamedLayerContentProvider> *contentProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIImage *decodedImage;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fixedFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSObject<UINamedLayerImage> *namedLayerImage;
@property (nonatomic, readonly) double opacity;
@property (readonly) Class superclass;

+ (id)decodedNamedLayerImageFromNamedLayerImage:(id)arg1;
+ (id)namedLayerImageFromNamedLayerImage:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (int)blendMode;
- (id)decodedImage;
- (bool)fixedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)imageObj;
- (id)init;
- (id)name;
- (id)namedLayerImage;
- (double)opacity;
- (void)setBlendMode:(int)arg1;
- (void)setDecodedImage:(id)arg1;
- (void)setNamedLayerImage:(id)arg1;

@end
