
@interface Te_c3seuakuh8Input : NSObject <MLFeatureProvider> {
    MLMultiArray * _Placeholder;
}

@property (nonatomic, retain) MLMultiArray *Placeholder;
@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)Placeholder;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithPlaceholder:(id)arg1;
- (void)setPlaceholder:(id)arg1;

@end
