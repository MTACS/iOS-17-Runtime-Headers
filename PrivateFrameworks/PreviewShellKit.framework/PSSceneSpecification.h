
@interface PSSceneSpecification : NSObject {
    UVAgentSceneSpecification * _specification;
}

@property (nonatomic, readonly) UVAgentSceneSpecification *specification;

+ (id)mainSceneSpecification;
+ (id)previewSceneSpecification;

- (void).cxx_destruct;
- (id)initWithSpecification:(id)arg1;
- (id)specification;

@end
