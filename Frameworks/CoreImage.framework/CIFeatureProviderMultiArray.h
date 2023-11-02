
@interface CIFeatureProviderMultiArray : NSObject <MLFeatureProvider> {
    MLMultiArray * multiArray;
    NSString * name;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *multiArray;
@property (nonatomic, retain) NSString *name;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithName:(id)arg1 array:(id)arg2;
- (id)multiArray;
- (id)name;
- (void)setMultiArray:(id)arg1;
- (void)setName:(id)arg1;

@end
