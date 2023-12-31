
@protocol OADProperties3DParent <NSObject>

@required

- (bool)hasScene3D;
- (bool)hasShape3D;
- (OADScene3D *)scene3D;
- (void)setScene3D:(OADScene3D *)arg1;
- (void)setShape3D:(OADShape3D *)arg1;
- (OADShape3D *)shape3D;

@end
