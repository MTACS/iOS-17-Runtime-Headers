
@interface MonzaV4_1Output : NSObject <MLFeatureProvider> {
    MLMultiArray * _angle;
}

@property (nonatomic, retain) MLMultiArray *angle;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)angle;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithAngle:(id)arg1;
- (void)setAngle:(id)arg1;

@end
