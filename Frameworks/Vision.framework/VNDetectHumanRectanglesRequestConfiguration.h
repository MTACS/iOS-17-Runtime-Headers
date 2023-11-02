
@interface VNDetectHumanRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {
    bool  _upperBodyOnly;
}

@property (nonatomic) bool upperBodyOnly;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (void)setUpperBodyOnly:(bool)arg1;
- (bool)upperBodyOnly;

@end
