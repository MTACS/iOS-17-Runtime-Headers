
@protocol AXPIFingerModelDelegate

@required

- (void)didUpdateForceForFingerModel:(AXPIFingerModel *)arg1;
- (void)didUpdateLocationForFingerModel:(AXPIFingerModel *)arg1;
- (void)didUpdatePressStateForFingerModel:(AXPIFingerModel *)arg1;
- (void)didUpdateSelectedStateForFingerModel:(AXPIFingerModel *)arg1;
- (void)didUpdateShapeForFingerModel:(AXPIFingerModel *)arg1;

@end
