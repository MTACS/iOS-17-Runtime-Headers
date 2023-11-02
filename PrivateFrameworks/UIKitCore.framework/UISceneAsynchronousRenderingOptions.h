
@interface UISceneAsynchronousRenderingOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    bool  _opaque;
    float  _renderMaxAPL;
    double  _renderPeriod;
    NSArray * _renderTimes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool opaque;
@property (nonatomic, readonly) float renderMaxAPL;
@property (nonatomic, readonly) double renderPeriod;
@property (nonatomic, readonly, copy) NSArray *renderTimes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)opaque;
- (float)renderMaxAPL;
- (double)renderPeriod;
- (id)renderTimes;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
