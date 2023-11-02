
@interface _HKGraphViewAnnotationEntry : NSObject {
    NSAttributedString * _annotation;
    id  _modelCoordinate;
}

@property (nonatomic, retain) NSAttributedString *annotation;
@property (nonatomic, retain) id modelCoordinate;

- (void).cxx_destruct;
- (id)annotation;
- (id)modelCoordinate;
- (void)setAnnotation:(id)arg1;
- (void)setModelCoordinate:(id)arg1;

@end
