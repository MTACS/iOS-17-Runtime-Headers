
@protocol IPAGeometryOperator <NSObject>

@required

- (NSString *)identifier;
- (<IPAImageTransform> *)transformForGeometry:(id <IPAImageGeometry>)arg1;

@end
