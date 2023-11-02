
@interface SelectedCheckboxFromIcon__generated__Input : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * _image;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) struct __CVBuffer { }*image;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (struct __CVBuffer { }*)image;
- (id)initWithImage:(struct __CVBuffer { }*)arg1;
- (void)setImage:(struct __CVBuffer { }*)arg1;

@end
