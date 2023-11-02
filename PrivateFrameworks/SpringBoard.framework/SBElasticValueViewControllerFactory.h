
@interface SBElasticValueViewControllerFactory : NSObject {
    id /* block */  _generator;
}

+ (id)factoryWithBrightnessDataSource:(id)arg1;
+ (id)factoryWithVolumeDataSource:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithViewControllerGenerator:(id /* block */)arg1;
- (id)elasticValueViewController;

@end
