
@interface FCUserVectorModelOutput : NSObject <MLFeatureProvider> {
    MLMultiArray * _user_vector;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *user_vector;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithUser_vector:(id)arg1;
- (void)setUser_vector:(id)arg1;
- (id)user_vector;

@end
