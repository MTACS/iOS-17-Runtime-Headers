
@protocol HDNearFieldInterfaceDelegate

@required

- (void)nearFieldInterfaceDidEnterField:(HDNearFieldInterface *)arg1;
- (void)nearFieldInterfaceDidReadTag:(HDNearFieldInterface *)arg1;
- (void)nearFieldInterfaceFieldDetectionDidEndUnexpectedly:(HDNearFieldInterface *)arg1;
- (void)nearFieldInterfaceTagSessionDidEndUnexpectedly:(HDNearFieldInterface *)arg1;

@end
