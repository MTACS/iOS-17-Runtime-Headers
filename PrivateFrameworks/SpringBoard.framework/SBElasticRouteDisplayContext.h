
@interface SBElasticRouteDisplayContext : NSObject <SBElasticRouteDisplaying> {
    UIImage * _glyphImage;
    CCUICAPackageDescription * _glyphPackage;
    id /* block */  _glyphStateValueTransformer;
    NSString * _localizedDisplayName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, retain) CCUICAPackageDescription *glyphPackage;
@property (nonatomic, copy) id /* block */ glyphStateValueTransformer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *localizedDisplayName;
@property (readonly) Class superclass;

+ (id)routeContextWithName:(id)arg1 glyphImage:(id)arg2;
+ (id)routeContextWithName:(id)arg1 valueTransformer:(id /* block */)arg2 glyphPackage:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 glyphStateValueTransformer:(id /* block */)arg2 glyphPackage:(id)arg3 glyphImage:(id)arg4;
- (id)description;
- (id)glyphImage;
- (id)glyphPackage;
- (id /* block */)glyphStateValueTransformer;
- (id)localizedDisplayName;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphPackage:(id)arg1;
- (void)setGlyphStateValueTransformer:(id /* block */)arg1;
- (void)setLocalizedDisplayName:(id)arg1;

@end
