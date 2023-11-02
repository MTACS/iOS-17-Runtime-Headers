
@interface _SMUTVStackedImageNamedLayerStack : NSObject <NSCopying, UINamedLayerStack> {
    bool  _flatImageContainsCornerRadius;
    struct CGImage { } * _flattenedImage;
    NSArray * _layers;
    NSString * _name;
    id  _radiosityImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _radiosityImageScale;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool flatImageContainsCornerRadius;
@property (nonatomic) struct CGImage { }*flattenedImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *layers;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) id radiosityImage;
@property (nonatomic) struct CGSize { double x1; double x2; } radiosityImageScale;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)flatImageContainsCornerRadius;
- (struct CGImage { }*)flattenedImage;
- (id)layers;
- (id)name;
- (id)radiosityImage;
- (struct CGSize { double x1; double x2; })radiosityImageScale;
- (double)scale;
- (void)setFlatImageContainsCornerRadius:(bool)arg1;
- (void)setFlattenedImage:(struct CGImage { }*)arg1;
- (void)setLayers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRadiosityImage:(id)arg1;
- (void)setRadiosityImageScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
