
@interface CPSPointOfInterestAnnotationView : MKAnnotationView {
    CPImageSet * _imageSet;
    CPImageSet * _selectedImageSet;
}

@property (nonatomic, retain) CPImageSet *imageSet;
@property (nonatomic, retain) CPImageSet *selectedImageSet;

+ (struct CGPath { }*)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (id)balloonWithText:(id)arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_configure;
- (id)_defaultPOI;
- (void)_updateImage;
- (id)imageSet;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (id)selectedImageSet;
- (void)setImageSet:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelectedImageSet:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
