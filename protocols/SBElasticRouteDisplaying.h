
@protocol SBElasticRouteDisplaying <NSObject>

@required

- (UIImage *)glyphImage;
- (CCUICAPackageDescription *)glyphPackage;
- (id /* block */)glyphStateValueTransformer:(void *)arg1; // needs 1 arg types, found 5: id /* block */, float, void*, id, SEL
- (NSString *)localizedDisplayName;

@end
