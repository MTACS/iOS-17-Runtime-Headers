
@interface VUINamedLayerStack : NSObject <UINamedLayerStack> {
    UIImage * _cornerRadiusFlatImage;
    <UINamedLayerStack> * _layerStack;
    UIImage * _originalImage;
    NSArray * _replacementLayers;
}

@property (nonatomic, retain) UIImage *cornerRadiusFlatImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool flatImageContainsCornerRadius;
@property (nonatomic, readonly) struct CGImage { }*flattenedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UINamedLayerStack> *layerStack;
@property (nonatomic, readonly) NSArray *layers;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) UIImage *originalImage;
@property (nonatomic, readonly) id radiosityImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } radiosityImageScale;
@property (nonatomic, copy) NSArray *replacementLayers;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (id)decodedNamedLayerStackWithImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cornerRadius:(double)arg3;
+ (id)namedLayerStackWithImage:(id)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)cornerRadiusFlatImage;
- (bool)flatImageContainsCornerRadius;
- (struct CGImage { }*)flattenedImage;
- (id)init;
- (id)layerStack;
- (id)layers;
- (id)name;
- (id)originalImage;
- (id)radiosityImage;
- (struct CGSize { double x1; double x2; })radiosityImageScale;
- (id)replacementLayers;
- (double)scale;
- (void)setCornerRadiusFlatImage:(id)arg1;
- (void)setLayerStack:(id)arg1;
- (void)setOriginalImage:(id)arg1;
- (void)setReplacementLayers:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
