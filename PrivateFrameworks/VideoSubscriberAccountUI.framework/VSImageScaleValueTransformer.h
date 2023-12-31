
@interface VSImageScaleValueTransformer : NSValueTransformer {
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (id)transformedValue:(id)arg1;

@end
