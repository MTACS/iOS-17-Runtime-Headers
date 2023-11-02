
@interface BSServiceFeatureFlag : NSObject {
    NSString * _domain;
    NSString * _featureName;
}

@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) NSString *featureName;

- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (id)featureName;
- (id)initWithDomain:(id)arg1 featureName:(id)arg2;
- (bool)isEnabled;

@end
