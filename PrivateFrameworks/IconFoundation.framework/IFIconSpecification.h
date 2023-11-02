
@interface IFIconSpecification : NSObject {
    NSArray * _imageSpecifications;
    double  _maxScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    double  _minScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    NSString * _name;
    NSArray * _variants;
}

@property (readonly) NSArray *allImageSpecifications;
@property (readonly) NSArray *allVariants;
@property (readonly) NSArray *imageSpecifications;
@property (readonly) double maxScale;
@property (readonly) struct CGSize { double x1; double x2; } maxSize;
@property (readonly) double minScale;
@property (readonly) struct CGSize { double x1; double x2; } minSize;
@property (readonly) NSString *name;
@property (readonly) NSArray *variants;

+ (id)defaultIconSpecification;
+ (id)iosAppIconSpecification;
+ (id)iosDocumentGlyphSpecification;
+ (id)iosDocumentIconSpecification;
+ (id)iosMessagesAppIconSpecification;
+ (id)macosDocumentIconSpecification;
+ (id)macosIconSpecification;
+ (id)macosTemplateIconSpecification;
+ (id)rOSAppIconSpecification;
+ (id)tvAppIconSpecification;
+ (id)watchAppIconSpecification;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 imageSpecifiactions:(id)arg2 variants:(id)arg3;
- (id)allImageSpecifications;
- (id)allVariants;
- (id)description;
- (id)imageSpecificationForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)imageSpecifications;
- (id)imageSpecificationsMatchingPredicate:(id)arg1;
- (id)imageSpecificationsWithTags:(id)arg1 withoutTags:(id)arg2;
- (id)init;
- (double)maxScale;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)minScale;
- (struct CGSize { double x1; double x2; })minSize;
- (id)name;
- (id)variants;

@end
