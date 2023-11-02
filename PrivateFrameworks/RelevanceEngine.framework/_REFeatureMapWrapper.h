
@interface _REFeatureMapWrapper : NSObject <REMLFeatureProvider> {
    REFeatureMap * _featureMap;
}

@property (nonatomic, readonly) NSSet *allFeatures;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allFeatures;
- (id)initWithFeatureMap:(id)arg1;
- (id)valueForFeature:(id)arg1;

@end
